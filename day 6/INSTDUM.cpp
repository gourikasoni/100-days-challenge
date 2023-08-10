#include <iostream>
using namespace std;

int main() 
{ 
    int t,n,i,a;
    
   
    cin>>t;
    while(t--)
    {
         int sum=0;
         int c=0;
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
             cin>> a[i];
        }
       for (i=0;i<=n-1;i++)
        {
            sum=sum + a[i];
            if(sum ==(i+1))
            {
                c=c+1;
            }
        }
        cout<<c<<endl;
    }
}
