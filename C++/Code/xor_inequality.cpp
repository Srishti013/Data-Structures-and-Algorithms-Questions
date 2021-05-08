#include <bits/stdc++.h>
using namespace std;
long long int power(int n,long long int m)
{
    long long int r;
    if(n==0)
    return 1;
    else if(n==1)
    r= 2;
    else
    {
        r=power(n/2,m);
        r=r*r%m;
        if(n%2)
        r=r*2%m;
    }
    return r;
    
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<"\n";
        }
        else
        {
            long long int m=pow(10,9)+7;
            n=n-1;
            long long int ans=power(n,m);
            cout<<ans<<"\n";
        }
    }
	return 0;
}
