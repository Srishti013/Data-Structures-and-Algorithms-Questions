/*
    Given a matrrix whose rows and columns are sorted, we have to find whether
    the given element is present in the matrix or not.
*/


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
    int k,f=0;
    cin>>k;
    int r=0,c=m-1;
    while(r<=n-1 && c>=0)
    {
        if(k==a[r][c])
        {
            f=1;
            cout<<"True";
            break;
        }
        else if(k>a[r][c])
        {
            r++;
        }
        else
        c--;
    }
    if(f==0)
    cout<<"False";
	return 0;
}
