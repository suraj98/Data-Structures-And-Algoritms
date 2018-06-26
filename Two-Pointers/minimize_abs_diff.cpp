int min(int a ,int b)
{
    return a<b?a:b;
}
int max(int a ,int b)
{
    return a>b?a:b;
}
int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) 
{
    int i=0 , j=0 , k =0 ;
    int len1=A.size();
    int len2=B.size();
    int len3=C.size();
    
    int diff = INT_MAX ;
    int di  ;
    
    while( (i<len1) && (j<len2) && (k<len3) )
    {
        
        di = abs( max(A[i],max(B[j],C[k]))-min(A[i],min(B[j],C[k]))  ) ;
        if(diff > di) diff = di ;
       
        if( (A[i]<=B[j]) && (A[i]<=C[k]) )
        {
            i++;
        }
        else if( (B[j]<=A[i]) && (B[j]<=C[k]))
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    
    return diff ;
}
