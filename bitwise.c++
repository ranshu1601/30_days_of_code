/* number to bit 
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n ; 
  cin >> n;
  int ans=0;
  int i=0;
  while(n!=0){
    int bit =n&1;
    ans=(bit*pow(10,i))+ans;
    n=n>>1;
    i++;
  }
  cout<<"Answer"<<ans<<endl;
}

bit to number

#include <iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  int ans=0;
  int i=0;
  cin>>n;
  while(n!=0){
    int dig =n %10;
    if(dig==1){
      ans=ans+pow(2,i);

    }
    n=n/10;
    i++;
  }
  cout<<ans<<endl;
  
}
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  uint32_t n;
  cin>>n;
  int ans=0;
  while (n!=0){

    int dig=n%10;
    ans =ans*10+dig;
    n=n/10;
    
  }
  cout<<ans<<endl;
}