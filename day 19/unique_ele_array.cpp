#include <iostream>
using namespace std;
int main()
{
    int i,j,n,z;
    int k=0;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    int temp[n];
     
   for(i=0;i<n;i++)
   {
    if(i==n-1 || arr[i] != arr[i+1])
    {
        temp[k++] = arr[i];

    }
   }
   z=sizeof(temp)/sizeof(temp[0]);
  
   for (int ele =0;ele<k;ele++)
   {
    cout<<temp[ele]<<" ";
   }

}