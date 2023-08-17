#include <iostream>
using namespace std;

int main() 
{
  int t,n;
  cin>>t;
  while (t--)
  {   cin>>n;
      int count=0;
      while(n!=50)
      {
          if(n>50)
          {
              n=n-3;
              count=count+1;
          }
          else
          {
              n=n+2;
              count=count+1;
          }
          
      }
      cout<<count<<endl;
  }

}

