class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int A[], int B[], int l1, int l2)
    {
        int s=0,sa=0,sb=0,i=0,j=0;
        while(i<l1 && j<l2)
        {
            if(A[i]<B[j])
            {
                sa+=A[i];
                i++;
            }
            else if(B[j]<A[i])
            {
                sb+=B[j];
                j++;
            }
            else
            {
                s+=max(sa,sb);
                sa=0;
                sb=0;
                s+=A[i];
                i++;
                j++;
            }
        }
        while(i<l1)
        {
            sa+=A[i++];
            
        }
        while(j<l2)
        {
            sb+=B[j++];
            
        }
        s+=max(sa,sb);
        return s;
    }
};
