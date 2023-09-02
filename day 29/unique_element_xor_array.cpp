#include <iostream>
using namespace std;
int main()
{
    int n,i;
    int ans=0;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    cout<<"enter elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        ans=ans^arr[i];
    }
    cout<<ans;
}
