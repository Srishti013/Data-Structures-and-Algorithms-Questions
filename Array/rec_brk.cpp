#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int max=-1,num=0;
	for(int i=0;i<n-1;i++)
	{
	    if(a[i]>max && a[i]>a[i+1])
	    {
	        num++;
	    }
	    if(a[i]>max)
	    max=a[i];
	}
	if(a[n-1]>max)
	num++;
	cout<<num;
}
