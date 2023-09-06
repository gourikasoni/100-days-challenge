#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,k;
	    cin>>n>>k;
	    int h[n];
	    int cnt=0;
	    for(int j=0;j<n;j++)
	    {
	        cin>>h[j];
	        if(h[j]>k)
	        {
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	    
	}
	return 0;
}
