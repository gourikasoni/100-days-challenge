#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	for(int i=1; i<=t; i++){
	    int G,S,B,g,s,b; cin>>G>>S>>B>>g>>s>>b;
	    if((G+S+B)>(g+s+b)){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<2<<endl;
	    }
	    
	}
	return 0;
}
