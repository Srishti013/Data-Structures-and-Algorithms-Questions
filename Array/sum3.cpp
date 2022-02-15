class Solution {
  public:
    int isPossible(int N, int arr[]) {
        int sum=0,sum_dig=0;
        for(int i=0;i<N;i++)
        {
            int temp=arr[i];
            while(temp>0)
            {
                sum_dig+=temp%10;
                temp/=10;
            }
            sum+=sum_dig;
            sum_dig=0;
        }
        return sum%3==0;
    }
};
