#include <iostream>
using namespace std;

int main()
{
    int t;
    float n,x,y,a,b;
    cin>>t;
    while (t--)
    {
      cin>>n>>x>>y>>a>>b;  
      if((n*x)/(a) >(n*y)/(b))
      {
          cout<<"diesel"<<endl;
      }
      else if((n*x)/(a) < (n*y)/(b))
      {
          cout<<"petrol"<<endl;
      }
      else if ((n*x)/(a) == (n*y)/(b))
      {
          cout<<"any"<<endl;
      }
    }
    
	
	return 0;
}
