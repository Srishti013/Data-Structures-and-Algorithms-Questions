void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        if(n%2==0)
        {
        for(int i=0;i<n-1;i+=2)
        {
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
            
        }
        }
        else
        {
        for(int i=0;i<n-2;i+=2)
        {
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
            
        }
        }
    }
