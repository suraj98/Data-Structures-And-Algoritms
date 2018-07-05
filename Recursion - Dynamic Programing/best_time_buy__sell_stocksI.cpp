/*
    Time complexity : o(n)
    space complexity :o(n)
*/
int max(int a , int b )
{
        return (a>b) ? a:b ;
}
    
int Solution::maxProfit(const vector<int> &prices) {
    
    int len = prices.size();
        int arr[len];
        arr[len-1]=0;
        int maxx = 0 ;
        for(int i=len-2;i>=0;i--)
        {
            arr[i] = max(prices[i],max(arr[i+1],prices[i+1]) ) ;
        }
        for(int i=len-2;i>=0;i--)
        {
            arr[i] = arr[i]-prices[i] ;
            if(maxx < arr[i])
                maxx = arr[i];
        }
        return maxx ;
}
