class Solution {
  public:
    int isGoodorBad(string S) 
    {
        int flag=0,c=0,v=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!='a' && S[i]!='e' && S[i]!='o' && S[i]!='u' &&  S[i]!='i')
            {
                c++;
                v=0;
            }
            else if(S[i]=='a' || S[i]=='e' || S[i]=='o' || S[i]=='u' ||  S[i]=='i')
            {
                v++;
                c=0;
            }
            else
            {
                v=0;
                c=0;
            }
            if(c>3)
            {
                flag=1;
                break;
            }
            if(v>5)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            return 0;
        }
        else
        return 1;
    }
};
