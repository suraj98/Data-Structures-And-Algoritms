vector<int> Solution::dNums(vector<int> &A, int B) 
{
     vector<int>result ;
     int len = A.size();
     unordered_map<int,int> m ;
     for(int i=0;i<B;i++)
     {
         m[A[i]]++;
     }
     int cnt = m.size();
     result.push_back(cnt);
     for(int i=B;i<len;i++)
     {
        if(m[A[i-B]] > 0)
        {
            m[A[i-B]]--;
            if(m[A[i-B]]==0) cnt-- ;
        }
        if(m[A[i]] == 0)  cnt++    ;
        m[A[i]]++;
        result.push_back(cnt);
    }
    return result ;
}
