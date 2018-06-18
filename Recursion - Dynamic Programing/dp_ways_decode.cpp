int decode(string A , int n )
{
    int table[n+1] ;
    table[0]=1;
    table[1]=1;
    for(int i=2;i<=n;i++)
    {
        table[i]=0;
        if(A[i-1] > '0')
             table[i] = table[i-1] ;
        
        if(A[i-2]=='1' || A[i-2]=='2' && A[i-1]<'7')
             table[i] += table[i-2] ;
        
    }
    return table[n];
}
int Solution::numDecodings(string A) 
{
  int len = A.length();
  if( A[0]=='0' )
        return 0;
  
  return decode(A,len) ;
}
