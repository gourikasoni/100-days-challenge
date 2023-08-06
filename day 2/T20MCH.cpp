#include <iostream>
using namespace std;

int main() 
{
    int r,o,c,z;
  cin>>r>>o>>c>>z;
  z=20-o;
  if(((z*36)+c)>r)
  {
      cout<<"yes";
  }
  else 
  {
      cout<<"no";
  }
	return 0;
}
