#include <iostream>
using namespace std;

int main()
{ 
    int t,x,y;
    cin>>t;
    while(t--)
    {
       cin>>x>>y;
       if(x<y)
       {cout<<"repair"<<endl;}
       else if(x>y)
       {cout<<"new phone"<<endl;}
       else if(x=y)
       {cout<<"any"<<endl;}
       
    }
    

	return 0;
}
