#include <iostream>
using namespace std;

int main() 
{
   int x,y;
   cin>>x>>y;
   if(x<y)
   {
       cout<<"old"<<endl;
   }
   else if(x==y)
   {
       cout<<"same"<<endl;
   }
   else if(x>y)
   {
       cout<<"new"<<endl;
   }
   
	return 0;
}
