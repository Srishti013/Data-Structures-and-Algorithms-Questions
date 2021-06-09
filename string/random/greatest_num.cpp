/*
   In this question given a string of numbers we have to find the greatest number that can be formed using them
   For Ex:
           Input:
                   "32451"
          Output:
                   "54321"
*/                   
           
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
    sort(s.begin(),s.end(),greater<char>());
    cout<<s;
	return 0;
}
