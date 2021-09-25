class Solution{ 
public:
    int thirdLargest(int a[], int n)
    {
         
         int an=-1,b=-1,c=-1;
         for(int i=0;i<n;i++)
         {
             if(a[i]>an)
             {
                 if(an==-1)
                 {
                     an=a[i];
                 }
                 else
                 {
                     int temp=an;
                     an=a[i];
                     int temp2=b;
                     b=temp;
                     c=temp2;
                 }
             }
             else if(a[i]>b && a[i]<an)
             {
                 int temp=b;
                 b=a[i];
                 c=temp;
             }
             else if(a[i]<b && a[i]>c)
             {
                 c=a[i];
             }
         }
         return c;
    }

};
