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
