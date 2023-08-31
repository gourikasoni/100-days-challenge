#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int d,D,a,b,c;
      cin>>d>>D>>a>>b>>c;
      int x=d*D;
      if(x<10)
        cout<<"0"<<endl;
      else if((x>=10)&&(x<21))
        cout<<a<<endl;
      else if((x>=21)&&(x<42))
        cout<<b<<endl;
       else
        cout<<c<<endl;
	}
}
