#include<bits/stdc++.h>
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> a;
	    sort(arr,arr+n);
	    for(int i=n-1;i>n-1-k;i--)
	    {
	        a.push_back(arr[i]);
	    }
	    return a;
	}

};
