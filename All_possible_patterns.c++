// Online C++ compiler to run C++ program online
 /* 1 2 3
    1 2 3
    1 2 3 
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
       int j=1;
       while(j<=n){
           cout<<j;
           j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
}

   1 2 3 
   4 5 6 
   7 8 9

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int i=1;
  int count=1;
  while(i<=n){
    int j=1;
    while(j<=n){
        cout<<count;
        count=count+1;
        j=j+1;
    }
    i=i+1;
    cout<<endl;
  }
}

111
222
333

#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while (i<=n){
    int j=1;
    while(j<=n){
      cout<<i;
      j=j+1;
    }
    i=i+1;
    cout<<endl;
  }
}

4444
3333
2222
1111

#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<n+1-i;
      j=j+1;
    }
    i=i+1;
    cout<<endl;
  }
}

*
**
***
****

#include <iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int i=1;
 while(i<=n){
  int j=1;
  while(j<=i){
    cout<<"*" ;
    j=j+1;

  }
  i=i+1;
  cout<<endl;
 }
}
****
***
**
*

#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j =1;
    while(j<=n+1-i){
      cout<<"*";
      j=j+1;
    }
    i=i+1;
    cout<<endl;
  }
}

1
12
123
1234


#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<j;
      j=j+1;
    }
    i=i+1;
    cout<<endl;
  }

}

1234
123
12
1

#include <iostream>
using namespace std;
int main()
{
  int n;
  int i=1;
  cin>>n;
  while(i<=n){
    int j=1;
    while(j<=n+1-i){
      cout<<j;
      j=j+1;
    }
    i=i+1;
    cout<<endl;
  }
}
*/