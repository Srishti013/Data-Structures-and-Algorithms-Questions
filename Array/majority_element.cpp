class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int me=nums[0],s=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] != me)
                s--;
            else
                s++;
            if(s<=0)
            {
                me=nums[i];
                s=1;
            }
        }
        return me;
    }
};
