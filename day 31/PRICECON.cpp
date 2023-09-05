#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,p,sum=0,count=0;
	    cin>>n>>k;
	    for(int i=1;i<=n;i++){
	        cin>>p;
	        sum+=p;
	        if(p>k){
	            count+=k;
	        }
	        else{
	            count+=p;
	        }
	        
	    }
	    cout<<sum-count<<endl;
	}
	return 0;
}