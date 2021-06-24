class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=1,i,f=0; 
        for(i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]!=nums[i+1])
                c++;
            if(c==3)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            return nums[i];
        else
            return nums[nums.size()-1];
    }
};
