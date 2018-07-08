/*
  https://practice.geeksforgeeks.org/problems/range-queries-for-longest-correct-bracket-subsequence/0/?track=Placement
*/
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
        stack<char>s1;
        int cnt = 0 ;
        cin >> s ;
        int a , b ;
        cin >> a >> b ;
        for(int i=a;i<=b ;i++)
        {
            if( s[i] == '(' )
            {
                s1.push('(');
            }
            else if(s[i] == ')' )
            {
                if(!s1.empty())
                {
                    cnt += 2 ;
                    s1.pop();
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
