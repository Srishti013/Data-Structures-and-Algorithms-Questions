#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int s,j;
	        cin>>s>>j;
	        if(j-s>5 || s-j>5)
	        c++;
	    }
	    cout<<c<<" ";
	}
	return 0;
}
