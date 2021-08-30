#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int flag=0;
    if(s1.size() != s2.size())
    {
        cout<<"Not Anagrams\n";
        flag=1;
    }
    else
    {
    vector<int> c1(26);
    for(int i=0;i<s1.size();i++)
    {
        c1[s1[i]-'a']++;
        c1[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(c1[i]!=0)
        {
            cout<<"Not Anagrams\n";
            flag=1;
            break;
        }

    }
    }
    if(flag==0)
    cout<<"Anagrams\n"; 
    return 0;

}