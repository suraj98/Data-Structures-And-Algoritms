//https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void swap(char* x , char* y)
{
    char  temp ;
    temp =  *x ;
    *x = *y ;
    *y =  temp ;
}

void permu(string s ,int low ,int high,vector<string>&v)
{
    if( low == high)
    {
      v.push_back(s);
    }
    else
    {
        for(int j=low ;j<=high;j++)
        {
          swap(&s[low],&s[j]);
          permu(s , low+1 , high,v);
         swap(&s[j],&s[low]);
        }
    }
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;
        int len = s.length();
        vector<string> v;
        permu( s , 0 ,len-1,v) ;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }

	return 0;
}
