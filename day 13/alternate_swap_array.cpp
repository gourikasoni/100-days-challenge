#include <iostream>
using namespace std;
int main()
{
    int i,n;
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
            swap(arr[i],arr[i+1]);
            
        

    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
    
}
