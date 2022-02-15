long long int product(int ar[], int n, long long int mod)
 {
     
     long long int x = 1;
     for(int i=0;i<n;i++)
     {
         x*=ar[i];
         x%=mod;
     }
     return x;
     
 }
