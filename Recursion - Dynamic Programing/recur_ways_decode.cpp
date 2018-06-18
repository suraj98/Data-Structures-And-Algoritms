int decode(string A , int n )
{
    if(n==0 || n==1)
        return 1 ;
        
    int count = 0 ;
    
    if(A[n-1]>'0')
      count = decode(A,n-1);
    
    if( A[n-2]=='1'||A[n-2]=='2' && A[n-1]<'7')
      count += decode(A,n-2) ;
      
    return count;
}
int Solution::numDecodings(string A) 
{
  int len = A.length();
  if( A[0]=='0' )
      return 0;
  
  return decode(A,len) ;
}
