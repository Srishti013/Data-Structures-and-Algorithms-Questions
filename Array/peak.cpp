class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        if(n==1)
            return 0;
       int s=0,e=n-1,m;
       while(s<=e)
       {
           m=(s+e)/2;
           if(m!=0 && m!=n-1)
           {
               if(arr[m]>arr[m-1] && arr[m]>arr[m+1])
                    return m;
                else if(arr[m]<arr[m-1])
                    e=m-1;
                else
                    s=m+1;
           }
           else
           {
               if(m==0)
                    if(arr[m]>arr[m+1])
                        return m;
                    else
                        s=m+1;
                else if(m==n-1)
                    if(arr[m]>arr[m-1])
                        return m;
                    else
                        e=m-1;
           }
           
       }
       return -1;
    }
};
