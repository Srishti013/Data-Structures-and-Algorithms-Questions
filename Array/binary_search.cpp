class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        int s=0,e=n-1,m;
        while(s<=e)
        {
            m=(s+e)/2;
            if(arr[m]==k)
            {
                return m;
            }
            else if(arr[m]>k)
            {
                e=m-1;
            }
            else
            {
                s=m+1;
            }
        }
        return -1;
    }
};
