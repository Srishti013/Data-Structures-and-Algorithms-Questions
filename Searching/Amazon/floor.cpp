int findFloor(long long int arr[], int N, long long int K) {
    
    int s=0,e=N-1,ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==K)
        {
            return mid;
        }
        if(arr[mid]>K)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
