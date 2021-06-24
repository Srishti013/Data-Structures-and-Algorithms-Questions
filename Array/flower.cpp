class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0;
        if(flowerbed.size()==1)
        {
            if(flowerbed[0]==0)
                c=1;
            else
                c=0;
         if(c<n)
            return false;
        else 
             return true;
         }
        if(flowerbed[0]==0 && flowerbed[1]==0)
        {
            c++;
            flowerbed[0]=1;
        }
        for(int i=1;i<flowerbed.size()-1;i++)
        {
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]!=1)
            {
                c++;
                flowerbed[i]=1;
            }
        }
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0)
        {
            c++;
            flowerbed[flowerbed.size()-1]=1;
        }
        if(c<n)
            return false;
        else 
             return true;
    }
};
