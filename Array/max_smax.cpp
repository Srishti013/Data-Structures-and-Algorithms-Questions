class Solution{
  public:
   
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = -1, max2= -1;
        
         vector<int> a;
         for(int i=0;i<sizeOfArray;i++)
         {
             if(arr[i]>max)
             {
                 int temp =max;
                 max=arr[i];
                 max2=temp;
             }
             else if(arr[i]>max2 && arr[i]<max)
             {
                 max2=arr[i];
             }
         }
         a.push_back(max);
         a.push_back(max2);
         return a;
         
         
    }
};
