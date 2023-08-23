#include <iostream>
using namespace std;

int main()
{ 
    int t,k,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if (n<k)
        {
            cout<<"0"<<endl;
        }
       else if (n%k==0) 
       {
           cout<<n/k<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }
    }
    
}

