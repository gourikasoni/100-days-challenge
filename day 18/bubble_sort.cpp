#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    cout<<"enter array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if(a[j+1]<a[j])
            {
                swap(a[j+1],a[j]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
