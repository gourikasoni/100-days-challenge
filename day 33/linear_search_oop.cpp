#include <iostream>
using namespace std;
class linearsearch
{  
    public:
    bool flag;
    int size;
    int arr[size];
    void lisearch(int size)
    {
    cin>>size;
    int arr[size];
    cout<<"enter elements";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    }
    void search1(int ele)
    {
        bool flag= false;
        for(int i=0;i<size;i++) 
        {
            if(arr[i]==ele)
            {
                flag =true;


            }
        }
    }
    void output()
    {
        if (flag)
        {
            cout<<"element found";
        }
        else if(flag)
        {
            cout<<"element not found";
        }
    }



};
int main()
{ int x,y,z;
    cout<<"enter size";
    cin>>x;
    cout<<"enter element to search";
    cin>>y;
    linearsearch search;
    search.lisearch(x);
    search.search1(y);
    search.output();
    return 0;
}