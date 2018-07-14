#include<iostream>
using namespace std;
int main()
 {
	int t ;
	cin >> t ;
	while(t--)
	{
	   int n1 , n2 ;
	   string s1 , s2 ;
	   
	   cin >> n1 >> n2 ;
	   cin >> s1 >> s2 ;
	   int table[n1+1][n2+1] ;
	   int result = 0 ;
	   for(int i=0 ;i<=n1 ;i++)
	   {
	       for(int j=0;j<=n2;j++)
	       {
	           if( i == 0  || j==0) 
	           {  table[i][j] = 0  ; }
	           else if(s1[i-1]==s2[j-1])
	           {
	             table[i][j] = 1 + table[i-1][j-1] ;
	             result = max(result,table[i][j]) ;    
	           }
	           else
	           { table[i][j] =0 ;}
             
	       }
	   }
	    cout<<result<<"\n";
	}
	return 0;
}
