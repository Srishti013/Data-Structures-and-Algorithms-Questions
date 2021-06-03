class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> x;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            x.push_back(sum);
         }
        return x;
    }
};
