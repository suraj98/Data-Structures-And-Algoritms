/*
  https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem/0
*/

#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int t ;
	cin >> t ;
	while(t--)
	{
	   int n , q; 
	   cin >> n ;
	   bool flag = true;
	   int ar[n] ;
	   
	   for(int i=0;i<n;i++)
	   {  cin >> ar[i] ; }
	   
	   cin >> q ;
	   
	   for(int i=0;i<n;i++)
	   {  ar[i] = ar[i]%q ; }
	   
	   sort(ar,ar+n);
	   
	   int i = 0 ;
	   int j = n-1;
	   if( n%2 == 0)
	   {
	       
	        if(q==1)
	        {
	            flag=true ;
	        }
	        else
	        {
	            while(i<j)
	            {
	                if(( ar[i]+ar[j] != q) && (ar[i]+ar[j]!= 0))
	                {
	                    cout<<"False\n";
	                    flag = false ;
	                     break;
	                }
	                i++;
	                j--;
	            }
	         }
	  
	   }
	   else
	   {
	           cout<<"False\n";
	           flag = false ;
	   }
	   
	   if(flag)
	   {
	       cout<<"True\n";
	   }
	   
	}
	return 0;
}
