#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
    char freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    int max_freq=0;
    char ans='a';
    for(int i=0;i<26;i++)
    {
        if(freq[i]>max_freq)
        {
            max_freq=freq[i];
            ans=i+'a';
        }
    }
    cout<<"The letter having maximum frequency is '"<<ans<<"' with a frequency of "<<max_freq;
	return 0;
}
