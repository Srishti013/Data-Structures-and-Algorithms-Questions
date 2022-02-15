class Solution{
  public:
    
    bool findTriplets(int arr[], int n)
    { 
        if(n<3)
            return 0;
        if(n==3)
        {
            return arr[0]+arr[1]+arr[2]==0;
        }
        sort(arr,arr+n);
        for(int i=0;i<n-3;i++)
        {
            int ele=arr[i];
            int e=n-1,s=i+1;
            while(s<e)
            {
                if(ele+arr[s]+arr[e]==0)
                   return 1;
                else if(ele+arr[s]+arr[e]>0)
                    {
                        e--;
                    }
                else
                    s++;
                
            }
        }
        return 0;
        
        
    
    }
};
