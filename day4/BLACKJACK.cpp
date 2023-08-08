#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int n=a+b;
	    if(n>10)
	    cout<<21-n<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
