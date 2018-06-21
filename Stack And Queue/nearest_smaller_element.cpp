vector<int> Solution::prevSmaller(vector<int> &A)
{
    int len = A.size() ;
    vector<int> v(len);
    stack<int>s;
    v[0]=-1;
    s.push(A[0]);
    for(int i=1;i<len;i++)
    {
        while(!s.empty() && s.top()>=A[i]) s.pop() ;
        if(!s.empty())
           {
               v[i] = s.top() ;
           }
           else
           {
             v[i]=-1;     
           }
        s.push(A[i]);  
    }
    return v ;
}
