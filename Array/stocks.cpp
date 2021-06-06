class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_prof=0,min_price=INT_MAX,dif;
        for(int i=0;i<prices.size();i++)
        {
           
           
            if(prices[i]<min_price)
            {
                min_price=prices[i];
            }
            dif=prices[i]-min_price;
            if(dif>max_prof)
            {
                max_prof=dif;
            }
        }
        return max_prof;
    }
};
