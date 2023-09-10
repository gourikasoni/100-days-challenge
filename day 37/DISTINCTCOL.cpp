#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   int c=0;
	   cin>>n;
	   int a[n];
	   for(int i=0;i<n;i++)
	   {
	       cin>>a[i];
	       if(a[i]>a[0])
	       {
	           a[0]=a[i];
	       }
	   }
	   cout<<a[0]<<endl;
	   
	}
	return 0;
}
