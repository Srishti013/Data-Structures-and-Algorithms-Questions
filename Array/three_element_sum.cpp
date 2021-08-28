/*Find three elements in the given array whose sum==target*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    int target,flag=0;
    cin>>target;
    sort(v.begin(),v.end());
    int strt=0,end=n-1,sum=v[strt]+v[end];
    for(int i=0;i<n-2;i++)
    {
        strt=i+1;
        end=n-1;
        while(strt<=end)
        {
            sum=v[strt]+v[end];
            if(sum==target-v[i])
            {
            flag=1;
            break;
            }
            else if(sum<10)
            strt++;
            else
            end--;
        }
        if(flag==1)
        {
            cout<<v[i]<<" + "<<v[strt]<<" + "<<v[end]<<" = "<<target<<"\n";
            break;
        }

    }
    if(!flag)
    cout<<"No match found!";
    return 0;
}

