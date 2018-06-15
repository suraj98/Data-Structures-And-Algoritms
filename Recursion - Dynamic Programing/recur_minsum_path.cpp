int min(int a , int b)
{
    return (a<b)?a:b;
}
int minsum(vector<vector<int> >&A,int m , int n)
{
    if ( (m<0) || (n<0) )
    {
        return INT_MAX ;
    }
    else if( (m==0) && (n==0) )
    {
        return A[0][0];
    }
    else
    {
        return A[m][n]+min(minsum(A,m-1,n),minsum(A,m,n-1) ) ;  
    }
}
int Solution::minPathSum(vector<vector<int> > &A) 
{
    
    int m = A.size();
    int n = A[0].size(); 
    return minsum(A,m-1,n-1);
}
