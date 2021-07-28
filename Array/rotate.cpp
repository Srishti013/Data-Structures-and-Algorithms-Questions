class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        int temp[d];
        for(int i=0;i<d;i++)
        {
            temp[i]=arr[i];
        }
        for(int i=0;i<n-d;i++)
        {
            arr[i]=arr[i+d];
        }
        for(int i=n-d;i<n;i++)
        {
            arr[i]=temp[i-(n-d)];
        }
    }
};
