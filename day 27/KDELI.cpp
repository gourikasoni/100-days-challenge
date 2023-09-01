#include <iostream>
using namespace std;

int main() 
{
    int t,n,k,l,i,j;
    cin>>t;
    while (t--)
    {
        cin>>n>>k>>l;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(arr[j+1]>arr[j])
                {
                    swap(arr[j+1],arr[j]);
                }
            }
        }
        int temp=0;
        int sum=0;
        for(i=l-1;i<n;i=i+k)
        {
            sum=sum+arr[i];
           
        }
        cout<<sum<<endl;
    
    }

	return 0;
}
