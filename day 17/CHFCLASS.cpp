#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--) {
	    int n;
	    cin>>n;
	    
	    cout<< (n/7) + (n%7==6 ? 1 : 0) <<endl;
	    
	}
	return 0;
}