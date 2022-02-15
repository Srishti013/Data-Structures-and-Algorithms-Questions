class Solution{
public:
    int remove_duplicate(int arr[],int n){
        int c=1,ele=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=ele)
            {
                arr[c]=arr[i];
                c++;
                ele=arr[i];
            }
        }
        return c;
    }
};
