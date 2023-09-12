#include <iostream>
using namespace std;
int main()
{
    int n,i,ele;
    cout<<"enter array size";
    cin>> n;
    int arr[n];
    cout<<"enter array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    cout<<"element to search";
    cin>>ele;
    int start =0;
    int end= n-1;
    int mid;
    while (start <= end )
    {  
        mid = (start+end)/2;
       if (ele == arr[mid])
       { 
        cout<<"ele found at"<< mid;
        break;
       }
       else if (ele <arr[mid])
       {
        end = mid -1;
       }
       else if (ele >arr [mid])
       {
        start = mid +1;
       }
       
    }
    if (start>end)
    {
        cout<<"ele not found";
    }
    

}