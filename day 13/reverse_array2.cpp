#include <iostream>
using namespace std;
int main()
{
    int n,i,start,end;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    cout<<"enter array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        start=0;
        end=n-1;
    while (start<=end)
    {
        
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(i=0;i<n;i++)
    {  

        cout<<arr[i];
    }
}