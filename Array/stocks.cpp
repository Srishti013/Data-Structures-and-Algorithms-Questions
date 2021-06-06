class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=prices[0],max_prof=0,sl,dif;
        for(int i=1;i<prices.size();i++)
        {
           sl=prices[i];
           dif=sl-s;
            if(dif<0)
            {
                s=prices[i];
            }
            else
            {
                max_prof=max(max_prof,dif);
            }
        }
        return max_prof;
    }
};
