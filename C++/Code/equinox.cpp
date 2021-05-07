#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,a,b;
	    cin>>n>>a>>b;
	    long long int sp=0,ap=0;
	    for(long long int i=0;i<n;i++)
	    {
	        string s;
	        cin>>s;
	        if(s[0]=='E' || s[0]=='Q' ||  s[0]=='U' ||  s[0]=='I' ||  s[0]=='N' ||  s[0]=='O' ||  s[0]=='X')
	        sp+=a;
	        else
	        ap+=b;
	    }
	    if(sp>ap)
	    cout<<"SARTHAK\n";
	    else if(ap>sp)
	    cout<<"ANURADHA\n";
	    else
	    cout<<"DRAW\n";
	}
	return 0;
}
