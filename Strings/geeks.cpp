/*
  Geek and its Colored Strings
*/

#include<iostream>
using namespace std;

long long int func(int n , int r , int b ,int g )
{
    long long int sum = 0 ;
    long long int fact[n+1] ;
    fact[0] = 1 ;
    
    for(long long int i=1;i<=n;i++)
    {
        fact[i] = i*fact[i-1] ;
    }
    
    long long int left = n-r-b-g ;
    for(long long int i=0;i<=left;i++)
    {
        for(long long int j=0;j<=left-i;j++)
        {
            long long int k = left-j-i ;
            sum = sum + ( fact[n] / (fact[r+i]*fact[b+j]*fact[g+k]) ) ;
        }
    }
    
    return sum ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long int n , r , b , g ;
        cin >> n >> r >> b >> g ;
        cout<<func(n,r,b,g)<<"\n" ;
    }
    
    return 0;
}
