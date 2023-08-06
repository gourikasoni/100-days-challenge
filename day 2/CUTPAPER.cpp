#include <iostream>
using namespace std;

int main() 
{
    int t,i,k,n,z;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>k;
        z=(n/k);
        cout<<z*z<<endl;
    }
    
	
	return 0;
}
