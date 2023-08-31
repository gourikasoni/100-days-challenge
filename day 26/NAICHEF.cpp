#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    float num[n];
	    float counta =0;
	    float countb =0;
	    for(int i=0;i<n;i++){
	        cin>>num[i];
	        if(num[i]==a){
	            counta++;
	        }if(num[i]==b){
	            countb++;
	        }
	    }
	    float ans = (counta/n) * (countb/n);
	    cout<<ans<<endl;
	}
	return 0;
}