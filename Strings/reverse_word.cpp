//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0/?track=SP-Strings
// STRINGS+STACK

#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int t ; 
	cin >> t ;
	while(t--)
	{
	 string s ;
	 cin >> s ;
	 int len = s.length() ;
	 stack<string>st;
	 int j=0;
	 
	 while( (s[j]!='\0') && (j <=len))
	 {
	     string s1 ;
	     
	     while( (s[j] != '.') && (s[j]!='\0') )
	     {
	         s1 += s[j];
	         j++;
	     }
	     st.push(s1);
	    j++;
	 }
	 while( !st.empty())
	 {
	     if(st.size() == 1)
	     {
	     cout<<st.top();
	     }
	     else
	     {
	     cout<<st.top()<<".";
	     }
	     st.pop();
	 }
	 cout<<"\n";
	}
	return 0;
}
