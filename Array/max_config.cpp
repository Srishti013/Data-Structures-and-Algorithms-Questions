int max_sum(int A[],int n)
{
  int sum=0,sum_in=0,c=0,x=0,mx_sum=0;
  for(int i=0;i<n;i++)
  {
      sum+=A[i]; 
      sum_in+=A[i]*i;  
  }
  mx_sum=sum_in; 
  for(int i=0;i<n-1;i++)
  {
      sum_in = sum_in +sum - n*(A[n-1-i]);
      mx_sum=max(mx_sum,sum_in);
  }
 
  return mx_sum;
 
}
