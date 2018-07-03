int Solution::removeDuplicates(vector<int> &a) 
{
    int len = a.size();
    
    if(len == 1)
        return 1 ;
        
    int cnt = 0 ;
    for(int i=0;i<len-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[cnt] = a[i];
            cnt++;
        }
        if( (i == len-2) )
        {
           a[cnt]=a[len-1]; 
        }
    }
  
    return cnt+1 ;
}
