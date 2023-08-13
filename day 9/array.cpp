#include <iostream>
using namespace std;
void arr(int size)
{   int a[size];
    int i;
    cout<<"enter number";
    for (i=0;i<=size -1;i++)
    {
        cin>>a[i];
        cout<<a[i];
    }
}
    int main()
    {
    
    int a;
    cout<<"enter a";
    cin>>a;
     arr(a);
    return 0;
    }
    



