#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int c=1,cmax=0,d=0,dp=a[1]-a[0];
	for(int i=1;i<n;i++)
	{
	    d=a[i]-a[i-1];
	    if(d==dp)
	    {
	    c++;
	    }
	    else
	    {
	        if(c>cmax)
	        cmax=c;
	        c=1;
	    }
	    dp=d;
	    
	}
	cout<<cmax+1;
}
