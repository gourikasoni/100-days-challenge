#include <iostream>
using namespace std;
int main()
{
    int i;
    int hansa;
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    cout<<"enter array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i=i+2)
    {
        hansa=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=hansa;

    }

    for(i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
}
    
