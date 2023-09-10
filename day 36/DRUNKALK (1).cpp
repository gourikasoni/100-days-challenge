#include<iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        int x, a, b;
        cin>>x;
        if(x % 2 != 0) 
        {
            a = ((x / 2) + 1) * 3;
            b = (x/2) ;
        }
        else 
        {
            a = (x/2) * 3;
            b = (x/2);
        }

        cout<<abs(a-b)<<endl;
    }
    return 0;
}
