int min(int a,int b)
{
    return (a>b)?b:a;
}
int Solution::canJump(vector<int> &A) 
{
    int len = A.size();
    bool ar[len];
    memset(ar,false,sizeof(ar));
    ar[0]=0;
    if(len ==1 )
        return true;
    
    for(int i=1;i<len;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[j]+j >= i)
            {
                ar[i] = true; 
                break;
            }
        }
        if(!ar[i])
            return false;
    }
    
    return ar[len-1] ;
}
