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
   int min=0,mini=0,temp;
   for(int i=0;i<n-1;i++)
   {
       min=a[i];
       mini=i;
       for(int j=i+1;j<n;j++)
       {
           if(a[j]<min)
         {  
           min=a[j];
           mini=j;
         }
       }
       temp=a[i];
       a[i]=min;
       a[mini]=temp;
   }
   for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
