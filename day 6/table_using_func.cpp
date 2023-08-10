#include <iostream>
using namespace std;
void table( int n,int limit)
{
    int ans,i;
    for(i=1;i<=limit;i++)
    {
        ans=n*i;
        cout<<n<<"x"<<i<<"="<<ans<<endl;

    }
}
int main()
{
    int a,b;
    cout<<"enter number";
    cin>>a;
    cout<<"enter limit";
    cin>>b;
    table(a,b);
}