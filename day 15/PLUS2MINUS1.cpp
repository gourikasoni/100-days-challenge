#include <iostream>
using namespace std;

int main() 
{ 
    int t,y;
    cin>>t;
    while (t--)
    {
        cin>>y;
        if (y==0)
        {
         cout<<1<<endl;   
        }
        else
        {
            cout<<(y*3)<<endl;
        }
    }
	return 0;
}
