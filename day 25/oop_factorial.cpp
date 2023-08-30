#include <iostream>
using namespace std;
class factorial
{
    public:
    int num,ans,i;
    void calc()
    {
        cout<<"enter number";
        cin>>num;
        ans =1;
        for(i=1;i<=num;i++)
        {
            ans=ans*i;
        }
    }
        void display()
        {
        cout<<"factorial of "<<num<<"is"<<" " <<ans;
        }
    
};
int main()
{
    factorial obj;
    obj.calc();
    obj.display();

}



