#include <iostream>
using namespace std;

int main() 
{
 int t,a,b,a1,b1,a2,b2,i;
 cin>>t;
 for(i=1;i<=t;i++)
 {
     cin>>a>>b>>a1>>b1>>a2>>b2;
     if((a==a1||a==b1) && (b==a1||b==b1))
     {
         cout<<1<<endl;
     }
     else if((a==a2||a==b2)&& (b==a2||b==b2))
     {
         cout<<2<<endl;
     }
     else
     {
         cout<<0<<endl;
     }
     
     
 }
	return 0;
}
