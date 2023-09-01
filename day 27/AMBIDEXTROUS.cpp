#include <iostream>
using namespace std;

int main() 
{
   int t,l,r,m,x,y;
   cin>>t;
   while(t--)
   {
       cin>>l>>r>>m;
       x= m/l;
       y=m/r;
       if(m%l==0)
       {
           cout<<x+y<<endl;
       }
       else if(m%l != 0)
       {
           cout<<x+1+y<<endl;
       }
       
   }
 
	return 0;
}
