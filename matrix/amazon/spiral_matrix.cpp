class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
    int top=0,count=0,bottom=r-1,right=c-1,left=0;
    vector<int> a(r*c);
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            a[count]=matrix[top][i];
            
            count++;
            
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            a[count]=matrix[i][right];
           
            count++;
        }
        right--;
        if(top<=bottom)
        {
           for(int i=right;i>=left;i--)
           {
            a[count]=matrix[bottom][i];
           
            count++;
           } 
        }
        bottom--;
        if(left<=right)
        {
           for(int i=bottom;i>=top;i--)
           {
            a[count]=matrix[i][left];
            
            count++;
           } 
        }
        left++;
    }
    return a;
    }
};
