class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        vector<int> a;
        
        if(n==1)
        {
            for(int i=0;i<m;i++)
            {
                a.push_back(matrix[0][i]);
            
            }
            
        }
        else if(m==1)
        {
            for(int i=0;i<n;i++)
            {
                a.push_back(matrix[i][0]);
                
            }
            
        }
        else
        {
            for(int i=0;i<m;i++)
            {
               a.push_back(matrix[0][i]);
            
            }
            for(int i=1;i<n;i++)
            {
               a.push_back(matrix[i][m-1]);
        
            }
            for(int i=m-2;i>=0;i--)
            {
               a.push_back(matrix[n-1][i]);
            
            }
            for(int i=n-2;i>0;i--)
            {
               a.push_back(matrix[i][0]);

            }
        }
        return a;
    }
};
