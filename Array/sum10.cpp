/* Tell if two elements of the given array can have a sum as 10*/
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
    sort(v.begin(),v.end());
    int strt=0,end=n-1,sum=v[strt]+v[end];
    while(strt<=end)
    {
        sum=v[strt]+v[end];
        if(sum==10)
        break;
        else if(sum<10)
        strt++;
        else
        end--;
    }
    if(strt<=end)
    cout<<"True\n";
    else
    cout<<"False\n";
}
