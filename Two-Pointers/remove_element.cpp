int Solution::removeElement(vector<int> &A, int B)
{
    
    int len = A.size();
    int cnt = 0 ;
    for(int i=0;i<len;i++)
    {
        if(A[i] != B )
        {
            A[cnt]=A[i];
            cnt++;
        }
    }
    
    return cnt ;
}
