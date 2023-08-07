#include <iostream>
using namespace std;

int main() 
{
    int t,xa,xb,ra,rb;
    cin>>t;
    while(t--)
    {
        cin>>xa>>xb>>ra>>rb;
        cout<<(ra/xa)+(rb/xb)<<endl;
    }
	
	return 0;
}
