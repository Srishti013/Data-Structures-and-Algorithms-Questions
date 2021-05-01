#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	long long int m=1000000007;
	long long int a[n];
	long long int s=0;
	for(long long int i=0;i<n;i++)
	{
	    cin>>a[i];
	    s+= a[i];
	}
	s=(s%m +m)%m;
	long long int q;
	cin>>q;
	for(long long int i=0;i<q;i++)
	{
	    long long int x;
	    cin>>x;
	    s=2*s;
	    s=(s%m + m)%m;
	    cout<<s<<"\n";
	    
	}
	return 0;
}
