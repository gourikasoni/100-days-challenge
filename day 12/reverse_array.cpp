#include <iostream>
using namespace std;
int main() 
{
    int i;
    int n;
    cout<< "enter size";
    cin>>n;
    int arr[n];
    int arr2[n];
    cout << "Enter array ";
    for (i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    for (i=0;i<n;i++) 
    {
        cout<<arr[i];
    }
    cout<<endl;
    
    for (i=0;i<n;i++)
     {
        arr2[n-1-i]=arr[i];
    }
    
    for (i=0;i <n;i++) 
    {
        cout<<arr2[i];
    }
    

}
//you cannot use only for loop for reversing like without n-1-i etc becoz it will just reverse the numbers but will not store the reversed array
