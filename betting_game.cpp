#include<iostream>
using namespace std;
int main()
 {
	int t ;
	cin >> t ;
	while(t--)
	{
	    string s ;
	    cin >> s ;
	    int sum = 4 ;
	    int bet = 1 ;
	    int i =0 ;
	    bool f = true;
	     while(s[i]!='\0')
	     {
	         if(sum<bet)
	              {
	                f= false;
	                break;
	              }
	        if(s[i] == 'W')
	        {
	            sum = sum + bet;
	            bet =1 ;
	        }
	        else if(s[i] == 'L')
	        {
	               sum = sum-bet;
	                bet = 2*bet;

	        }
	        i++;
	        }

	    if(f)
	    {
	        cout<<sum<<"\n";
	    }
	    else
	    {
	        cout<<"-1"<<"\n";
	    }
	}
	return 0;
}
