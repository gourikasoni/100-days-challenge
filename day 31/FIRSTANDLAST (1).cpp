#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        int ar[n];
        int temp=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
       sum=ar[0]+ar[n-1];
        for(int i=0;i<n-1;i++)
        {
        temp=ar[i]+ar[i+1];
         sum=max(sum,temp);
        }
        cout<<sum<<endl;
    }
    return 0;
}
