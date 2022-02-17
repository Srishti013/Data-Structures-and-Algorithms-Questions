class Solution
{
    public:
  
    int missingNumber(int arr[], int n) 
    { 
        sort(arr,arr+n);
        int small=-1,small_i=-1;
        
        // Loop to find the smallest positve element
        for(int i=0;i<n;i++)
        {
           if(arr[i]>0)
           {
               small=arr[i];
               small_i=i;
               break;
           }
        }
        if(small>1 || small==-1)
            return 1;
        if(small_i==n-1)
            return small+1;
        for(int i=small_i+1;i<n;i++)
        {
            if(arr[i]!=small+1  && arr[i]!=small)
            {
                return small+1;
            }
            else if(arr[i]!=small)
            {
                small=small+1;
            }
        }
        return small+1;
        
    } 
    
    
};
