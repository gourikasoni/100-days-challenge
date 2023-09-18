#include <iostream>
using namespace std;

int main() 
{ 
    int t,a1,a2,b1,b2;
    cin>>t;
    while(t--)
    {
        cin>>a1>>a2>>b1>>b2;
        if((a1-a2)+(b1-b2)<0)
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
