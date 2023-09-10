#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    
	    if(a==b) cout<<"Yes"<<endl;
	    
	    
	    else if(a<b){ 
	        while(a<b){ 
	            a *= 2;
	        }
	        if(a==b) cout<<"Yes"<<endl; 
	        else cout<<"no"<<endl;
	    }
	    
	    
	    else{ 
	        while(b<a){ 
	            b *= 2;
	        }
	        if(a==b) cout<<"Yes"<<endl; 
	        else cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}