#include <iostream>
using namespace std;

int main() 
{
    int t,x,y,z,p,q,r;
    cin>>t;
    while(t--)
    {
    cin>>x>>y>>z;
    p=x*y;
    q=y*z;
    r=x*z;
    if(p%z==0)
    {
        cout<<p<<" " << z<<endl;
    }
    else if(q%x==0)
    {
        cout<<q<< " "<<x<<endl;
    }
    else if(r%y==0)
    {
        cout<<r<<" "<<y<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    }
    
	// your code goes here
	return 0;
}
