#include <iostream>
using namespace std;

int main() 
{
  int t,x,n,i;
  cin>>t;
  for(i=1;i<=t;i++)
  {
      cin>>n>>x;
      if(n<=x)
      {
          cout<<"0"<<endl;
      }
      else if(n>x)
       {
           cout<<(n-x + 3)/4<<endl;
       }
  }

}
