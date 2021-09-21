int Search(vector<int> vec, int K) {
    int s=0,e=vec.size()-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(vec[mid]==K)
        return mid;
        if(vec[mid]>vec[0])
        {
            if(vec[0]<=K && vec[mid-1]>=K)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        else
        {
            if(vec[vec.size()-1]>=K && vec[mid+1]<=K)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
    }
    return -1;
}
