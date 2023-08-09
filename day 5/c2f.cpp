#include <iostream>
using namespace std;
float c2f( float temp)
{
    float s;
    s=temp*1.8 +32;
    return s;
}
int main ()
{
    float celcius [10] = {37,38.2,39.6,42.9,53.9,100.4,42.6,44.9,50.6,99.6};
    float faren [10];
    int i;
    for(i=0;i<=9;i++)
    {
    faren [i] = c2f(celcius[i]);
    }
    cout<<endl<<"coversion done";
    for(i=0;i<=9;i=i++)
    {
        cout<<faren[i]<<endl;
    }
}