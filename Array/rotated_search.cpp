/* In this we have to find a target number in a rotated sorted array */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    int s=0,e=n-1,m=(s+e)/2,flag=0;
    if(k<v[0])
    {
    while(s<=e)
    {
        m=(s+e)/2;
        if(v[m]>v[0])
        s=m+1;
        else
        {
            if(v[m]==k)
            {
            cout<<k<<" is at position "<<m<<"\n";
            flag=1;
            break;
            }
            else if(v[m]>k)
            e=m-1;
            else
            s=m+1;
        }
    }
    }
    else
    {
    while(s<=e)
    {
        m=(s+e)/2;
        if(v[m]<v[0])
        e=m-1;
        else
        {
            if(v[m]==k)
            {
            cout<<k<<" is at position "<<m<<"\n";
            flag=1;
            break;
            }
            else if(v[m]>k)
            e=m-1;
            else
            s=m+1;
        }
    }
    }
    if(flag==0)
    cout<<"Element not found\n";
    return 0;
}