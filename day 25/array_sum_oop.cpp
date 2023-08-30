#include <iostream>
using namespace std;
class demo
{
    public:
    int a[10];
    int sum ;
    void accept()
    {
        cout<<endl<<"enter numbers";
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
    }
    void calc()
    {
        sum=0;
        for(int i=0;i<10;i++)
        {
            sum=sum+a[i];
        }
    }
    void display()
    {
        cout<<endl<<"sum is"<<sum;
    }
};
int main()
{
    demo obj;
    obj.accept();
    obj.calc();
    obj.display();

}