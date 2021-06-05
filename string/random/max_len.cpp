/*
    Given a string we have to find the length of the longest word.
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	cin.ignore();
	char a[n+1];
	cin.getline(a,n);
	cin.ignore();
	int i=0;
	int s=0,max_sum=0;
	while(a[i]!='\0')
	{
	    if(a[i]==' ')
	    {
	        max_sum=max(max_sum,s);
	        s=0;
	    }
	    else
	    s++;
	    i++;
	}
	max_sum=max(max_sum,s);
	cout<<max_sum;
	return 0;
}
