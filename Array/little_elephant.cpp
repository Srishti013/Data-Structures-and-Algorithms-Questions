#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N,C;
	    cin>>N>>C;
	    int a[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>a[i];
	    }
	    int s=0;
	    for(int i=0;i<N;i++)
	    {
	        s+=a[i];
	    }
	    if(s>C)
	    cout<<"No"<<"\n";
	    else
	    cout<<"Yes"<<"\n";
	}
	return 0;
}
