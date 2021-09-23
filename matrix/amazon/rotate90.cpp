void rotate(int n,int a[][n])
{
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           int temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n/2;j++)
       {
           int temp=a[j][i];
           a[j][i]=a[n-j-1][i];
           a[n-j-1][i] = temp;
       }
   }
}
