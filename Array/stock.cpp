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
    int min=0,max=n-1,strt=0,end=n-1;
    while(min<max && strt<max && end>min)
    {
        if(v[strt]<v[min])
        {
            min=strt;
        }
        if(v[end]>v[max])
        {
            max=end;
        }
        strt++;
        end--;
    }
    cout<<"max_profit = "<<v[max]-v[min]<<"\n";
    return 0;
}