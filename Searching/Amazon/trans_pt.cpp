int transitionPoint(int arr[], int n) {
    if(arr[0]==1)
    return 0;
    if(arr[n-1]==0)
    return -1;
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==1)
        {
            if(arr[mid-1]==0)
            return mid;
            else
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }

}
