#include <iostream>
using namespace std;

int main() 
{
    int t,h,f,y,c,z;
    cin>>t;
    while(t--)
    {
        cin>>h>>f>>y>>c;
        z= f + (0.5*y);
        if(z*h<=c)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
        
        
    }

	return 0;
}
