#include <iostream>
using namespace std;
int main()
{
    int n,i,evecount,oddcount;
    cout<<"enter size";
    cin>>n;
    evecount=0;oddcount=0;
    int arr[n];
    cout<<"enter elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            evecount=evecount+1;
        }
        else if(arr[i]%2 !=0)
        {
            oddcount=oddcount+1;
        }
    }
    cout<<evecount<< " " <<oddcount;
}