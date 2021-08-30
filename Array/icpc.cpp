#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int c=n;
	    for(int i=n-1;i>=0;i--)
	    {
	        if(a[i]>=1 && a[i]<=7)
	        break;
	        else
	        c--;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
