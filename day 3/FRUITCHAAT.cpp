#include <iostream>
using namespace std;

int main ()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
    cin>>x>>y;
    if(x>=2*y)
    {
      cout<<y<<endl;  
    }
    else if(x<2*y)
    {
        cout<<(x/2)<<endl;
    }
    }

    
	// your code goes here
	return 0;
}
