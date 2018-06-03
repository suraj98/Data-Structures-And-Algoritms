#include<iostream>
#include<vector>
using namespace std;

/*
Question link :https://practice.geeksforgeeks.org/problems/longest-prefix-suffix/0
Given a string of character, find the length of longest proper prefix which is also a proper suffix.
Example:
S = abab
lps is 2 because, ab.. is prefix and ..ab is also a suffix.

Input:
First line is T number of test cases. 1<=T<=100.
Each test case has one line denoting the string of length less than 100000.

Expected time compexity is O(N).

Output:
Print length of longest proper prefix which is also a proper suffix.

Example:
Input:
2
abab
aaaa

Output:
2
3

*/


int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;
        int n = s.length();

        vector<int>f(n);
        // Store longest prefix for each cureent element
        f[0]=0;

        for(int i=1;i<n;++i)
        {
            int j = f[i-1];
            while(j>0 && s[i]!=s[j])
                j=f[j-1];

            if(s[i] == s[j]) ++j ;
            f[i]=j;

        }

        cout<<f[n-1];       // index at index n-1
        cout<<"\n";
    }
	return 0;
}
