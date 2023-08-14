#include <iostream>
using namespace std;
void search (int size, int ele)
{
int arr[size];
int i;
cout<<"enter array";
for(i=0;i<size;i++)
{
    cin>>arr[i];
}
bool flag= false;
for(i=0;i<size;i++)
{
    if (arr[i] == ele)
    {
        flag=true;
    }
}
if (flag)
{
    cout<<"element found";
}
else
{
    cout<<"element not found";


}
}
 int main()
 {
 int x,y;
 cout<<"enter size of array"; cin>>x;
 cout<<"enter number to be searched"; cin>>y;
 search(x,y);
 return 0;
 }
 