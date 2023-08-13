#include <iostream>
using namespace std;
void sum (int size)
{ 
    int a[size];
    int i;
    int total =0;
    cout<<"enter numbers";
    for(i=0;i<=size-1;i++)
    {
        cin>>a[i];
        total=total+a[i];
    }

    cout<<total;

}
 int main()
 {
    int b;
    cout<<"enter b";
    cin>>b;
    sum(b);
    return 0;

 }
