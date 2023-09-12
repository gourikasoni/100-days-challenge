#include <iostream>
using namespace std;
int main()
{ 
    int n,i;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int end= n-1;
    int start =0;
    bool ans =true;
    while (start<= end)
    {

        if (arr[start] != arr[end])
        { 
            ans= false; 
            break;
        }
       start ++;
       end--;
        
    }
     if (ans)
     {
        cout<<"palindrome";
     }
     else 
     {
        cout<<"not a palindrome";
     }
}