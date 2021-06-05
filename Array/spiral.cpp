#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	int rs=0,re=n-1,cs=0,ce=m-1;
	while(rs<=re && cs<=ce)
	{
	    for(int i=cs;i<=ce;i++)
	    {
	        cout<<a[rs][i]<<" ";
	    }
	    rs++;
	    for(int i=rs;i<=re;i++)
	    {
	        cout<<a[i][ce]<<" ";
	    }
	    ce--;
	    for(int i=ce;i>=cs;i--)
	    {
	        cout<<a[re][i]<<" ";
	    }
	    re--;
	    for(int i=re;i>=rs;i--)
	    {
	        cout<<a[i][cs]<<" ";
	    }
	    cs++;
	}
	return 0;
}
