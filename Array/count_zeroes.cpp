int countZeroes(int arr[], int n) {
        
        if(arr[n-1]==1)
        return 0;
        else if(arr[0]==0)
        return n;
        else
        {
            
            int s=0,e=n-1;
            while(s<=e)
            {
                int mid=(e+s)/2;
                if(arr[mid]==0)
                {
                    if(arr[mid-1]!=0)
                    return n-mid;
                    else
                    e=mid-1;
                }
                else if(arr[mid]==1)
                {
                    s=mid+1;
                }
                
            }
        }
        
    }
