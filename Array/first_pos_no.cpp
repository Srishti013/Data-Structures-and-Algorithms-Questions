/*
   In this ques we have to find the smallest missing positive number in an unsorted array 
   TEST CASES:
              INPUT:
                    6 
                    0 -9 1 3 -4 5
                    
             OUTPUT:
                    2
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	const int N= 1e6 + 2;
	bool x[N];
	for(int i=0;i<N;i++)
	x[i]=false;
	for(int i=0;i<n;i++)
	{
	    if(x[a[i]]>=0)
	    {
	        x[a[i]]=true;
	    }
	}
	int ans=-1;
    for(int i=1;i<N;i++)
    {
        if(x[i]==false)
        {
            ans=i;
            break;
        }
        
    }
    cout<<ans;
	
}
