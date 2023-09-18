#include <iostream>
using namespace std;

int main() {
	int t,n,k,a;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int count =0,hnsa=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        if(count+a>=k)
	        count+=a-k;
	        else if(hnsa==0)
	        hnsa=i+1;
	    }
	    if(hnsa>0)
	    cout<<"NO "<<hnsa<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
