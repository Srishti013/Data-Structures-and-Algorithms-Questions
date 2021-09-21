int peakElement(int arr[], int n)
{
   int s=0,e=n-1;
   while(s<=e)
   {
       int mid=(s+e)/2;
       if((mid==0 && arr[mid+1]<=arr[mid]) || (mid==n-1 && arr[mid-1]<=arr[mid]) || (arr[mid+1]<=arr[mid] && arr[mid-1]<=arr[mid]))
           return mid;
       if((mid==0 && arr[mid+1]>arr[mid]))
           s=mid+1;
       if((mid==n-1 && arr[mid-1]>arr[mid]))
           e=mid-1;
       if(mid!=0 && arr[mid-1]>arr[mid])
       {
           e=mid-1;
       }
       else if(mid!=n-1)
       {
           s=mid+1;
       }
   }
   return -1;
}
