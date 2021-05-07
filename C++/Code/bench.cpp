#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,w,wr;
	    bool flag=0;
	    cin>>n>>w>>wr;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    if(w<=wr)
	    {
	    cout<<"YES\n";
	    flag=1;
	    }
	    else
	    {
	        w=w-wr;
	        for(int i=0;i<n-1;i++)
	        {
	            if(a[i+1]==a[i])
	            {
	                w= w - (2*a[i]);
	                if(w<=0)
	                {
	                    cout<<"YES\n";
	                    flag=1;
	                    break;
	                }
	                i++;
	            }
	        }
	        
	    }
	    if(flag==0)
	    cout<<"NO\n";
	}
	return 0;
}
