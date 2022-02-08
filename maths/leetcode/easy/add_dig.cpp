class Solution {
public:
    int addDigits(int num) {
        int sum=0;    
        while(num>=10)
        {
            int n=num;
            while(n>0)
            {
                sum+=n%10;
                n/=10;
            }
            num=sum;
            sum=0;
        }
        return num;
    }
};
