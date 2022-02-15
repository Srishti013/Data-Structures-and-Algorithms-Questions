class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int zeros=0,ones=n-1;
        while(zeros<ones)
        {
            if(arr[zeros]==1)
            {
                swap(arr[zeros],arr[ones]);
                ones--;
            }
            else
                zeros++;
        }
    }
};
