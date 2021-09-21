int LastOcc(int arr[],int el,int n)
{
    int s=0,e=n-1,ans=0;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==el)
        {
            if(mid!=n-1 && arr[mid+1]==el)
                s=mid+1;
            else
                return mid;
        }
        else if(arr[mid]>el)
        {
            e=mid-1;
        }
        else 
        {
            s=mid+1;
        }
    }
    return e;
}
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
       sort(arr2,arr2+n);
       vector<int> a(m);
       for(int i=0;i<m;i++)
       {
           int y=LastOcc(arr2,arr1[i],n);
           int d=y+1;
           a[i]=d;
       }
       return a;
       
    }
};
