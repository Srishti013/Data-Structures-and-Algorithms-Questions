class Solution{
public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        int s=0,e=n-1,ans=n;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(a[mid]==b[mid])
            {
                s=mid+1;
            }
            else
            {
                ans=mid;
                e=mid-1;
            }
        }
        return ans;
        
    }
};
