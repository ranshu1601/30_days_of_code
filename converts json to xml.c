#include <iostream>
#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/prettywriter.h>

using namespace rapidjson;
using namespace std;

string jsonToXml(const string& json)
{
    Document d;
    d.Parse(json.c_str());

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    writer.StartObject();
    for (Value::ConstMemberIterator itr = d.MemberBegin(); itr != d.MemberEnd(); ++itr)
    {
        writer.String(itr->name.GetString());
        if (itr->value.IsArray())
        {
            writer.StartArray();
            for (SizeType i = 0; i < itr->value.Size(); i++)
            {
                writer.StartObject();
                writer.String(itr->value[i].GetObject().MemberBegin()->name.GetString());
                writer.String(itr->value[i].GetObject().MemberBegin()->value.GetString());
                writer.EndObject();
            }
            writer.EndArray();
        }
        else
        {
            writer.String(itr->value.GetString());
        }
    }
    writer.EndObject();
    return buffer.GetString();
}

int main()
{
    string json = "{\"person\": {\"name\": \"John Doe\", \"age\": 30, \"city\": \"New York\"}}";
    cout << jsonToXml(json) << endl;
    return 0;
}
