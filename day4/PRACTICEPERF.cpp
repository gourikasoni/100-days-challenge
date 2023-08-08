#include <iostream>
using namespace std;

int main() 
{  int i;
    int c=0;
    int a[4];
    int p1,p2,p3,p4;
    for(i=0;i<=3;i++)
    {
     cin>>a[i];
    }
    for(i=0; i<=3;i++)
    {
      if(a[i]>=10)  
      c=c+1;
    
    }
cout<<c;
	return 0;
}
