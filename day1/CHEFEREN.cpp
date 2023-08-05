//link to problem - https://www.codechef.com/problems/CHEFEREN

#include <iostream>
using namespace std;

int main()
{
	int t,i,a,b,n;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    cin>>n>>a>>b;
	    if(n%2==0)
	    {
	        cout<<((0.5*n*a)+(0.5*n*b))<<endl;
	    }
	    else if(n%2==1)
	    
	    {
	        cout<<(((n-1)*0.5*a)+((n+1)*0.5*b))<<endl;
	    }
	}
	return 0;
}
