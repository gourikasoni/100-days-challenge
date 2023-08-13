#include <iostream>
using namespace std;
void max(int size)
{
    int arr[size];
    int i;
    int large=0;
    cout<<"enter numbers";
    for(i=0;i<=size-1;i++)
    {
        cin>>arr[i];
        if(arr[i]>large)
        {
            large=arr[i];
        }
    

    }
cout<<large;

}
int main()
{
int a;
cout<<"enter size";
cin>>a;
max(a);
return 0;
}