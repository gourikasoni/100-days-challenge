#include <iostream>
using namespace std;
int main ()
{  int a,b,c,d,large;
   cout<< "enter 4 numbers";
   cin>> a>> b>> c>> d;
   large = (a>b?((a>c)?((a>d)?a:d):c):b);
   cout<<large;
}