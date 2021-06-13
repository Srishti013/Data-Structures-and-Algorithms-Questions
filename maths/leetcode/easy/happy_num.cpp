class Solution {
public:
    bool isHappy(int n) {
      while(n/10!=0)
      {
          int x=n;
          int s=0;
          while(x>0)
          {
              s += (x%10)*(x%10);
              x=x/10;
          }
          n=s;
      }
        if(n==1 || n==7)
            return true;
        else
            return false;
    }
};
