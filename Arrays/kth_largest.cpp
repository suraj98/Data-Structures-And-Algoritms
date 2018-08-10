/*
https://practice.geeksforgeeks.org/problems/kth-largest-element-in-a-stream/0
*/

#include<iostream>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int k , n ;
        cin >> k >> n ;
        int st[n],ar[n] ;
        for(int i=0;i<n;i++)
        {
            cin>>st[i];
        }
        
        for(int i=0;i<k-1;i++)
        {
            cout<<"-1 ";
        }
        if(k == 1)
            {
              cout<<st[0]<<" ";  
            }
        for(int i=1;i<n;i++)
        {
            int j = i-1 ;
            int key = st[i] ;
            
            while( key<st[j] && j>=0)
            {
                st[j+1]=st[j];
                j--;
            }
            
            st[j+1]= key;
            
            if(i>=k-1)
            {
                cout<<st[i-k+1]<<" ";
            }
        }
        cout<<"\n";
        
    }
	return 0;
}
