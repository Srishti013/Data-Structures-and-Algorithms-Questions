#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	const int N= 1e6 + 2;
	int x[N];
	for(int i=0;i<N;i++)
	x[i]=-1;
	int minin= INT_MAX;
	for(int i=0;i<n;i++)
	{
	    if(x[a[i]]!=-1)
	    {
	        minin=min(minin,x[a[i]]);
	    }
	    else
	    x[a[i]]=i;
	}
	if(minin==INT_MAX)
	cout<<-1;
	else
	cout<<minin;
	
}
