#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int last = n ;
        if( n%2 != 0)
            last -= 1 ;
            
        for(int i=0;i<last;i+=2)
        {
            cout<<v[i+1]<<" "<<v[i]<<" ";
        }
        
        if( n%2 != 0)
            cout<<v[n-1];
            
        cout<<"\n";
    }
	return 0;
}
