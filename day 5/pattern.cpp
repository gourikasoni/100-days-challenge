#include <iostream>
using namespace std;
int main ()
{
    int i,j,k;
    for(i=1 ; i<=4;i++)
    {
        for(j=1; j<=4-i;j++)
        {
            cout<< " ";
        }
        for(k=1;k<=(2*i)-1;k++)
        {
            cout<< "*";
        }
        {
        cout<<endl;
        }

    }
    for (i=3; i>=1; i--)
    {
        for(j=1;j<=4-i;j++)
        {
            cout<< " ";
        }
        for(k=1;k<=(2*i)-1 ; k++)
        {
            cout<<"*";
        }
        {cout<<endl;}
    }
}