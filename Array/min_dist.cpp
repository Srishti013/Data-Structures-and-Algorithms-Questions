class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int d=0,ix=-1,iy=-1,md=n+1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                ix=i;
            }
            if(a[i]==y)
            {
                iy=i;
            }
            if(ix!=-1 && iy!=-1)
            {
                if(ix>=iy)
                d=ix-iy;
                else
                d=iy-ix;
                if(d<md)
                md=d;
            }
        }
        if(md==n+1)
        return -1;
        else
        return md;
    }
};
