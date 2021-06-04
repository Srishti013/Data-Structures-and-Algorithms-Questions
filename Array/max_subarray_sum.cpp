class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> numsum(nums.size());
        if(nums.size()==1)
            return nums[0];
        int s = nums[0],maxsum=INT_MIN;
        maxsum=max(maxsum,s);
        if(s<0)
            {
               maxsum=max(maxsum,s);
                s=0;
             }
        for(int i=1;i<nums.size();i++)
        {
            s += nums[i];
            maxsum=max(maxsum,s);
            if(s<0)
            {
                maxsum=max(s,maxsum);
                s=0;
             }
        }
        return maxsum;
    }
    
};
