#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr1[n],arr2[n],max_lead=0,l,w,sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i]>>arr2[i];
    }
    for(int i=0;i<n;i++)
    {
        sum1+=arr1[i];
        sum2+=arr2[i];
        if(sum1>sum2)
        {
            l=sum1-sum2;
            if(l>max_lead)
            {
                w=1;
                max_lead=l;
            }
        }
        else if(sum2>sum1)
        {
            l=sum2-sum1;
            if(l>max_lead)
            {
                w=2;
                max_lead=l;
            }
        }
        else
        {
            continue;
        }
    }
    cout<<w<<" "<<max_lead;
	return 0;
}
