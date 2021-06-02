#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int swap=1;
   while(swap!=0)
   {
       swap=0;
       for(int i=0;i<n-1;i++)
       {
           if(a[i]>a[i+1])
           {
               int temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
               swap=1;
           }
       }
   }
   for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
