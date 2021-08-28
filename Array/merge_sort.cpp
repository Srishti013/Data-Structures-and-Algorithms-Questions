/* Given Two sorted arrays form a new sorted array containing elements of both the given arrays */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n),c(m),d(m+n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
    }
    int x=0,y=0,i=0;
    while(x<n && y<m)
    {
        if(v[x]<=c[y])
        {
            d[i]=v[x];
            i++;
            x++;
        }
        else
        {
            d[i]=c[y];
            i++;
            y++;
        }
    }
    if(x==n && y<m-1)
    {
        for(int j=y;j<m;j++)
        {
            d[i]=c[j];
            i++;
        }
    }
    else if (y==m && x<m-1)
    {
         for(int j=x;j<n;j++)
        {
            d[i]=v[j];
            i++;
        }
    }
    for(int j=0;j<m+n;j++)
    {
        cout<<d[j]<<" ";
    }
    cout<<"\n";
    return 0;

}