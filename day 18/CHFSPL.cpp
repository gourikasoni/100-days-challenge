#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>=b && a>=c){
	        if(b>=c){
	            cout<<a+b<<endl;
	        }else{
	            cout<<a+c<<endl;
	        }
	    }else if(b>=a && b>=c){
	        if(a>=c){
	            cout<<a+b<<endl;
	        }else{
	            cout<<b+c<<endl;
	        }
	    }else if(c>=a && c>=b){
	        if(a>=b){
	            cout<<a+c<<endl;
	        }else{
	            cout<<b+c<<endl;
	        }
	    }
	}
	return 0;
}
