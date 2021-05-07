#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,a,b;
	    cin>>x>>a>>b;
	    if(x>=100)
	    cout<<a*10;
	    else
	    cout<<(a+((100-x)*b))*10;
	    cout<<"\n";
	}
	return 0;
}
