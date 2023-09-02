#include <iostream>
using namespace std;
int main ()
{
    int n,i;
    int evensum=0;
    int oddsum=0;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    cout<<"enter elements ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<n;i=i+2)
    {
        evensum=evensum+ arr[i];
    }
    for(i=1;i<n;i=i+2)
    {
        oddsum=oddsum+ arr[i];
    }
    cout<<evensum<< "  "<<oddsum;

}