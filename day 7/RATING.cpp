#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,s;
	std::cin >> t;
	while(t--)
	{
	    std::cin >> s;
	    int x,y;
	    x=s+1;
	    y=s-x;
	    std::cout << x*y << std::endl;
	}
	return 0;
}
