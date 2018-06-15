int min(int a , int b)
{
    return (a<b)?a:b;
}
int minsum(vector<vector<int> >&A,int row , int col)
{
    int table[row][col];
    memset(table,0,sizeof(table));
    table[0][0] = A[0][0];
    
    for(int i=1;i<col;i++)
    { table[0][i] = A[0][i]+table[0][i-1];  }
    
    for(int i=1;i<row;i++)
    { table[i][0] = A[i][0]+table[i-1][0];  }
    
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
           table[i][j] = A[i][j] + min(table[i-1][j],table[i][j-1]) ;
        }
    }
    return table[row-1][col-1] ;
}
int Solution::minPathSum(vector<vector<int> > &A) 
{
    int row = A.size();
    int col = A[0].size();
    return minsum(A,row,col);
}
