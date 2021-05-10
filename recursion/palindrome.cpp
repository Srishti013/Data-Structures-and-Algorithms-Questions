#include <bits/stdc++.h>
using namespace std;
bool palcheck(string &s, int a,int b)
{
    if(a>=b)
    return true;
    else
    {
        if(s[a]!=s[b])
        return false;
        else
        {
            a++;
            b--;
            palcheck(s,a,b);
        }
    }
}
int main() {
	string s;
	cin>>s;
	int a=0,b=s.length()-1;
	if(palcheck(s,a,b))
	cout<<"palindrome";
	else
	cout<<"not palindrome";
	return 0;
}
