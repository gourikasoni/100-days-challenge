#include <iostream>
using namespace std;

int main() 
{
    int t,amin,bmin,cmin,a,b,c,tmin;
    cin>>t;
    while(t--)
    {
        cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
        if(a>=amin && b>=bmin && c>=cmin && (a+b+c)>=tmin)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
            
            
        
    }
        
    


    
 
	return 0;
}
