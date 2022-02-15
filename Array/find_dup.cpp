// Solution 1
vector<int> duplicates(int arr[], int n) {
        vector<int> a;
        sort(arr,arr+n);
        int ele=arr[0],c=1;
        for(int i=1;i<n;i++)
        {
            if(ele==arr[i])
            c++;
            else
            {
                ele=arr[i];
                c=1;
            }
            if(c>1 && arr[i+1]!=ele)
            {
                a.push_back(ele);
            }
        }
        if(c>1 && a[a.size()-1]!=arr[n-1])
        a.push_back(arr[n-1]);
        if(a.empty())
        {
            a.push_back(-1);
            return a;
        }
        else
        return a;
    }


// Solution 2


class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> ans;
        int x[n] = {0};
        for(int i=0;i<n;i++)
        {
            if(x[arr[i]]>0)
            {
                ans.push_back(arr[i]);
                x[arr[i]]=-1;
            }
            else if(x[arr[i]]==0)
            {
                x[arr[i]]++;
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.empty())
        {
            ans.push_back(-1);
        }
        return ans;
       
    }
};
