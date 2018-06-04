#include<iostream>
#include<cstring>
using namespace std;
int main()
 {
    int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;

        int n = s.length();
        bool table[n][n] ;
        int max = 0 ;
        int start =  0 ;
        memset(table,false,sizeof(table));
        for(int i=0;i<n;i++)
        {
            table[i][i] = true ;
            max=1;
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i] == s[i+1])
            {
                table[i][i+1]=true;
                if(2 > max)
                    {
                    start = i ;
                    max = 2 ;
                    }
            }
        }

        for(int k=3;k<=n;++k)
        {
            for(int i=0;i<n-k+1;++i)
            {
                int j = i+k-1;
                if( (s[i]==s[j]) && table[i+1][j-1] )
                {
                    table[i][j] = true ;
                    if(k > max)
                    {
                    start = i ;
                    max = k ;
                    }
                }
            }
        }

        for(int i=start;i<start+max;i++)
        {
            cout<<s[i];
        }
        cout<<"\n";

    }
	return 0;
}
