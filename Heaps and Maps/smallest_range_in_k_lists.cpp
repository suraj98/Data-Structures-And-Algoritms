/* Naive Approach Time Complexity : O((n*k)*k) */ 

void findSmallestRange(int arr[][N], int n, int k)
{
    int ar[k+1] ;
    for(int i=0;i<=k;i++)
    {
        ar[i]=0;
    }
    int i , minval,maxval,minrange,minel,maxel,flag,minind;
    minrange = INT_MAX ;
   
    
    while(1)
    {
    minind=-1;
    minval = INT_MAX;
    maxval = INT_MIN;
    flag = 0 ;
    
    for( i=0;i<k;i++)
    {
        if(ar[i] == n)
        {
            flag = 1 ;
            break;
        }
        if(ar[i]<n && arr[i][ar[i]]<minval)
        {
            minval = arr[i][ar[i]]  ;
            minind = i ;
        }
        if(ar[i]<n && arr[i][ar[i]]>maxval)
        {
            maxval = arr[i][ar[i]];
        }
    }
    
    if(flag)
    { break ; }
    
    ar[minind]++;
    if( (maxval-minval) < minrange)
    {
        minel = minval;
        maxel = maxval;
        minrange = maxval-minval;
    }
    
    
    }
     
     
     cout<<minel <<" "<<maxel<<"\n";
}
