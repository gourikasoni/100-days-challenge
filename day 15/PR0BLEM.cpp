#include <iostream>
using namespace std;

int main() 
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if ((n-m)%2==0 || (m-n)%2 ==0)
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
