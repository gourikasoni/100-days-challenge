#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin >> t;
	while (t--)
	{
	    cin >> a >> b;
	    int aThenB = 500 - 2*a + 1000-4*(a+b);
	    int bThenA = 1000 - 4*b + 500-2*(a+b);
	    if (aThenB > bThenA)
	    {
	        cout << 500-2*a + 1000-4*(a+b) << endl;
	    }
	    else
	    {
	        cout << 500-2*(a+b) + 1000-4*b << endl;
	    }
	}
	return 0;
}