int majorityElement(int a[], int size)
{
        
   int c=1,ele=a[0];
   for(int i=1;i<size;i++)
   {
       if(a[i]==ele)
       c++;
       else
       c--;
       if(c==0)
       {
           ele=a[i];
           c++;
       }
   }
   c=0;
   for(int i=0;i<size;i++ )
   {
       if(a[i]==ele)
       c++;
   }
   if(c>size/2)
   return ele;
   else
   return -1;
        
}
