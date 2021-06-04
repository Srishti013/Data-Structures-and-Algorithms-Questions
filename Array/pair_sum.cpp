/* 
      To find if two elements of the given array can be added to be equal to the given number
      For Ex:
             Input:
	            8
                    2 4 7 11 14 16 20 21
                    31
             Output:
	            True
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int s;
    cin>>s;
    sort(a,a+n);
    int high=n-1,low=0,t=0;
    while(high>low)
    {
        if(a[high]+a[low]==s)
        {
        cout<<"True";
        t=1;
        break;
        }
        else if(a[high]+a[low]>s)
        {
            high--;
        }
        else if(a[high]+a[low]<s)
        {
            low++;
        }
    }
    if(t==0)
    cout<<"False";
	return 0;
}
