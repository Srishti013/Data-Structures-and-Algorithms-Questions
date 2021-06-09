#include <bits/stdc++.h>
using namespace std;

int get_bit(int n,int i)
{
    int  x=1<<i;
    return ((n&x) != 0);
}
int main() {
    int i,n;
    cin>>n>>i;
    cout<<get_bit(n,i);
	return 0;
}
