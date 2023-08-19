#include <iostream>
using namespace std;

int main() {
    int t,x,a,b,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>a>>b;
        y=a+(100-x)*b;
        cout<< y*10<<endl;
    }
	// your code goes here
	return 0;
}
