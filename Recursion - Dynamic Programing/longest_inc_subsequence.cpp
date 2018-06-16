void lis(int ar[],const vector<int> &A,int n)
{
   for(int i=1;i<n;i++)
   {
       for(int j=0;j<i;j++)
       {
           if( (A[j]<A[i]) && (ar[i]<ar[j]+1))
           {
               ar[i]=ar[j]+1;
           }
       }
   }
    
}
void lds(int ar[],const vector<int> &A,int n)
{
   for(int i=n-2;i>=0;--i)
   {
       for(int j=n-1;j>i;--j)
       {
           if( (A[j]<A[i]) && (ar[i]<ar[j]+1))
           {
               ar[i]=ar[j]+1;
           }
       }
   }
}
int Solution::longestSubsequenceLength(const vector<int> &A) 
{
    int len = A.size();
    if (len <= 0)
    {
        return 0;
    }
    int left[len] ;
    int right[len] ;
    for(int i=0;i<len;i++)
    {
        left[i]=1;
        right[i]=1;
    }
    
    lis(left,A,len);
    lds(right,A,len);
    int large = left[0]+right[0];
/*  
    for(int i=0;i<len;i++)
    {
        cout<<left[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<len;i++)
    {
       cout<<right[i]<<" ";
    }
    cout<<"\n";  
*/
    for(int i=1;i<len;i++)
    {
        if(large < (left[i]+right[i]) )
        {
            large = left[i]+right[i];
            //cout<<large<<" ";
        }
    }
    return large-1 ;
}

