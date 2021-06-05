#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int x,y;
	cin>>x>>y;
	int a[n][m];
	int b[x][y];
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	for(int i=0;i<x;i++)
	{
	    for(int j=0;j<y;j++)
	    {
	        cin>>b[i][j];
	    }
	}
	int c[n][y];
	int s=0;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<y;j++)
	    {
	        for(int k=0;k<m;k++)
	        {
	            s += a[i][k]*b[k][j];
	        }
	        c[i][j] =s;
	        s=0;
	    }
	}
    for(int i=0;i<n;i++)
	{
	    for(int j=0;j<y;j++)
	    {
	        cout<<c[i][j]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
