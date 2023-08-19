#include <iostream>
using namespace std;

int main() 
{ 
    int t,i,n;
    int count;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
           cin>>arr[i];
        } 
        count =8;
        for(i=0;i<n;i++)
        
        {
           if((arr[i] != 6 )&& (arr[i] != 7 )&& (arr[i] !=13) && (arr[i] !=14) && (arr[i] != 20) && (arr[i] !=21) && (arr[i] !=27 ) &&(arr[i] !=28))
        {
            count= count+1;
        }
        }
        
        cout<<count<<endl;
     

        
    }
	return 0;
 }
