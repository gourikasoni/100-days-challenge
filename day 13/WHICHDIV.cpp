#include <iostream>
using namespace std;

int main()
{
    int t,r;
    cin>>t;
    while (t--)
    {
        cin>>r;
        if (2000<=r)
        {
            cout<<1<<endl;
        }
        else if (r>=1600 && r<2000)
        {
            cout<<2<<endl;
        }
        else if(r<1600)
        {
            cout<<3<<endl;
        }
    }

	return 0;
}
