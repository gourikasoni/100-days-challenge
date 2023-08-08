#include <iostream>
using namespace std;
int main()
{
 int num,digit,large=-1;
 cout<<"enter number";
 cin>>num;
 while(num!=0)
 {
    digit = num%10;
    if(large < digit)
    {
        large = digit;
    }
    num=num/10;
 }
 cout <<large;
}