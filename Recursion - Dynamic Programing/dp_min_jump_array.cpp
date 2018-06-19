int min(int a,int b)
{ 
    return (a<b)?a:b;
}

int Solution::jump(vector<int> &A) 
{
    int len = A.size() ;
    int ar[len];
    
    ar[0]=0;
    
    if( len==0 )
    {
        return -1;
    }
    else if( len == 1 )
    {
        return 0 ;
    }
    else if( A[0] == 0)
    {
        return -1;   
    }
    
    for(int i=1;i<len;i++)
    {
        ar[i]=INT_MAX;   
        for(int j=0;j<i;j++)
        {
            if( i <= (A[j]+j) )
            {
                ar[i] = min(ar[j]+1,ar[i]) ;
                break;
            }
        }
    }
    
    if(ar[len-1] == INT_MAX)
        return -1;
    
    
    return ar[len-1];
}
