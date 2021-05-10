int countDigits(int n)
{
   if(n>=0 && n<=9)
   return 1;
   while(n>0)
   return 1+countDigits(n/10);
}
