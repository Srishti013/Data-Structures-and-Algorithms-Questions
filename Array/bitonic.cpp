class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int s=0,e=n-1,m;
	    while(s<=e)
	    {
	        m=(s+e)/2;
	        if(m!=n-1 && m!=0)
	        {
	            if(arr[m]>arr[m+1] && arr[m]>arr[m-1])
	                return arr[m];
	            else if(arr[m]>arr[m+1])
	                 e=m-1;
	            else
	                 s=m+1;
	        }
	        else
	        {
	            return arr[n-1];
	        }
	    }
	}
};
