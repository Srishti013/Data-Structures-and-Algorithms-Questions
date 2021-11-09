class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
    
        if(n==1)
        return 1;
        
        vector<int> s;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            s.push_back(sum);
        }
        for(int i=1;i<n-1;i++)
        {
            if(s[n-1]-s[i]==s[i-1])
            {
                return i+1;
            }
            
        }
        return -1;
    }
    
    
 

};
