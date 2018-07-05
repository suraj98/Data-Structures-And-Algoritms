/*
https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array/0/?track=Placement
*/

// C++ program to demonstrate functionality of unordered_map
#include <bits/stdc++.h>
using namespace std;

bool myfunc(string x , string y)
{
    string xy = x.append(y);
    string yx = y.append(x) ;
    
    return xy.compare(yx) > 0 ? true:false ;
}
int main()
 {
   int t ;
   cin >> t ;
   while(t--)
   {
       int n ;
       cin >> n ;
       string arr[n];
       for(int i=0;i<n;i++)
       {
           cin >> arr[i] ;
       }
       sort(arr,arr+n,myfunc);
       for(int i=0;i<n;i++)
       {
              cout<<arr[i]; 
       }
       cout<<"\n";
   }
	return 0;
}
