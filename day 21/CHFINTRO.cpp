#include <iostream>
using namespace std;

int main() {
	int n,r;
	cin>>n>>r;
	while(n--){
	    int R;
	    cin>>R;
	    if(R<r) cout<<"Bad boi\n";
	    else cout<<"Good boi\n";
	}
	return 0;
}
