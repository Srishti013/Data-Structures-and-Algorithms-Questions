int remAnagram(string str1, string str2)
{
    int count[26] = {0}, sum=0;
    for(int i=0;i<str1.length();i++)
    {
        count[str1[i]-'a']++;
    }
    for(int i=0;i<str2.length();i++)
    {
        count[str2[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
            sum+=abs(count[i]);
    }
    return sum;
}
