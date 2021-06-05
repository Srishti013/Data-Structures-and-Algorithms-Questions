/*
    Given a string we have to find whether it is a palindrome or not.
*/


#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	char a[n+1];
	cin>>a;
	int f=1;
	for(int i=0;i<n/2;i++)
	{
	    if(a[i]!=a[n-1-i])
	    {
	        f=0;
	        break;
	    }
	}
	if(f==1)
	cout<<"Palindrome string";
	else
	cout<<"Not a Palindrome srting";
	return 0;
}
