link to problem - https://www.codechef.com/problems/MAXTASTE

#include <iostream>
using namespace std;

int main() 
{
  int t,i,a,b,c,d;
  cin>>t;
  for (i=1;i<=t;i++)
  {
      cin>>a>>b>>c>>d;
      cout<<max(a,b) + max(c,d)<<endl;
      
  }
  
  
	return 0;
}
