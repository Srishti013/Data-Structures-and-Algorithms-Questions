#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int l;
	    cin>>l;
	    string s;
	    cin>>s;
	    float c=0,lo=0;
	    bool flag=0;
	    for(int i=0;i<l;i++)
	    {
	        lo++;
	        if(s[i]=='1')
	        c++;
	        if((lo/2)<=c)
	        {
	            cout<<"YES\n";
	            flag=1;
	            break;
	        }
	        
	    }
	    if(!flag)
	    cout<<"NO\n";
	}
	return 0;
}
