#include <bits/stdc++.h>
using namespace std;

int set_bit(int n,int i)
{
    int  x=1<<i;
    return (n|x);
}
int main() {
    int i,n;
    cin>>n>>i;
    cout<<set_bit(n,i);
	return 0;
}
