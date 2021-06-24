class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mxs=0,s=0;
        for(int i=0;i<accounts.size();i++)
        {
            s=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                s+=accounts[i][j];
            }
            mxs=max(s,mxs);
        }
        return mxs;
    }
};
