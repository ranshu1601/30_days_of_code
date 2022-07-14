/*ARRAY
ALL EXERCISES SOLVED 
Q1: WAP to read marks of 50 students and store them under an array

#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int A[size];
    for(int i=0;i<size;i++){
        cout<<"Enter an array";
        cin>>A[i];
    }
    for(int i=0;i<size;i++){
        cout<<A[i];
    }

    return 0;

}

Q2 : WAP to read prices of 20 items in an array and then display sum of all the prices , products of all the prices and average of them all.


#include<iostream>
using namespace std;
int main(){
    int size;
    int arr[size];
    cout<<"Enter size of the array "<<endl;
    cin>>size;
    for(int i=0; i <size ; i++){
        cin>>arr[i];
    }
    float sum = 0 ; 
    for(int i=0; i<size;i++){
        sum=sum+arr[i];
    }
    cout<<"sum = "<<sum<<endl;;
    int pro=1;
    for(int i =0; i<size;i++){
        pro = pro*arr[i];
    }
    cout<<"Product = "<<pro<<endl;
    float avg = sum/size;
    cout<<"average = "<<avg;

}

Q3 : WAP to count the number of employees earning more than 1 lakh per annum. the monthly salary of 100 employees are given

#include<iostream>
using namespace std;
int main(){
    int count=0;
    int size;
    cout<<"Enter the size of an array ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size ; i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]>=100000){
            count++;
        }
    }
    
    cout<<"count = "<<count;
    return 0;

}

Q4 : WAP to search a specific element in 1-D array [ linear search ]

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array";
    cin>>size;
    int arr[size];
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    int n ; 
    int flag;
    int posi;
    cout<<" Enter the number you wish to find ";
    cin>>n;
    for(int i=0; i<size; i++){
        if(n==arr[i]){
           flag=1;
           pos=i+1;
        }
        if (flag==1)
        else{
            flag=o;
        }
        
    }
}

Q5: WAP to find palimdrome or not

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the no of letters in the word ";
    cin>>size;
    char string[size+1];
    cout<<"enter the string ";
    cin.getline(string,size+1);

    //loop to find the length of the string 
    for(int len=0; string[len]!='\0';len++);
    int i , j , flag=1;
    for(i = 0 , j=len-1;i<len/2;i++,j--);
    
}
*/