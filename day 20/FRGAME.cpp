#include <iostream>
using namespace std;

int main() 
{
    int t,a,b,c,d;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c>>d;
        if(a<b)
        {
            a=a+c;
        }
        else if(a>=b)
        {
            b=b+c;
        }
        if(a<b)
        {
            a=a+d;
        }
        else if (a>=b)
        {
            b=b+d;
        }
        if(a>=b)
        {
            cout<<"N"<<endl;
        
        }
        else
        {
            cout<<"S"<<endl;
        }
    }

	return 0;
}
