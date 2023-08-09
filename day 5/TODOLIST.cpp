#include <iostream>
using namespace std;

int main() 
{
   int t,n,i;
   cin>>t;
   while(t--)
   {
       int y=0;
       cin>>n;
       int a[n];
       for(i=0;i<=n-1;i++)
       {
           cin>>a[i];
           
       }
       for(i=0;i<=n-1;i++)
       {
          if (a[i]>=1000)
          {
            y=y+1;  
          }
       }
       cout<<y<<endl;
   }
}
