#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long x,y,r,n;
	    cin>>x>>y>>r;
	    n=r/30;
	    if((x+n)%y==0)
	    cout<<(x+n)/y<<endl;
	    else 
	    cout<<(x+n)/y +1<<endl;
	}
	return 0;
}
