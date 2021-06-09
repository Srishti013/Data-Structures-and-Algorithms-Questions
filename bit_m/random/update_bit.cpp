#include <bits/stdc++.h>
using namespace std;

int update_bit(int n,int i)
{
    int  x=~(1<<i);
    n = (n&x);
    x = 1<<i;
    return (n|x);
}
int main() {
    int i,n;
    cin>>n>>i;
    cout<<update_bit(n,i);
	return 0;
}
