class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> y;
        for(int i=0;i<n;i++)
        {
            y.push_back(nums[i]);
            y.push_back(nums[i+n]);
         }
        return y;
    }
};
