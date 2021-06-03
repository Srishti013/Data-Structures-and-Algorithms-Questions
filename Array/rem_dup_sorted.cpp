class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=1;
        if(nums.size()==0)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
           if(nums[c-1]!=nums[i])
           {
               nums[c]=nums[i];
               c++;
            }
        }
        return c;
    }
};
