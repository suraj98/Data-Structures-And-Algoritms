/*https://practice.geeksforgeeks.org/problems/jumping-numbers/0/?track=Placement  */

#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
void jump(int x,int n)
{
      queue<int>q;
	    q.push(x);
	    vector<int>v ;
	    while(!q.empty())
	    {
	        int a = q.front() ;
	        q.pop();
	        if( a<=n)
	        { 
	            v.push_back(a);
	        }
	        else
	        { 
	            break ; 
	        }
	        
	        int last = a%10;
	        if( last == 0) 
	        {
	            last = 1 ;
	            
	            q.push( a*10+last);
	        }
	        else if( last == 9)
	        {
	            last = 8 ;
	            q.push( a*10+last);
	        }
	        else
	        {
	          
	            
	                 q.push( a*10+(last-1));
	             
	                 q.push( a*10+(last+1));
	        }
	    }
	    
	    sort(v.begin(),v.end());
	    
	    for (int i=0;i<v.size();i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    
}
int main()
{
	int t ;
	cin >> t ;
	while(t--)
	{
	    int n ;
	    cin >> n ;
	    cout<<"0 ";
	    for(int i=1;i<=9;i++)
	    {
	        
	        jump(i,n) ;
	    }
	    cout<<"\n";
	}
	return 0;
}
