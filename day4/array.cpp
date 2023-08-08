#include <iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int large;
    for(i=0;i<=9;i++)
    {
        cout<<a[i]<<endl;

    }
    large=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    cout<<large;

}
