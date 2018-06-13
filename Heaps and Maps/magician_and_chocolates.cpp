int Solution::nchoc(int A, vector<int> &B) 
{
    long long int sum = 0 ;
    int len = B.size();
     priority_queue<int>pq;
     for(int i=0; i<len ;i++)
     {
         pq.push(B[i]);
     }
     int top;
     for(int i=0;i<A;i++)
     {
         top = pq.top(); 
         sum += top;
         sum = sum%1000000007;
         top = floor(top/2);
         if(!pq.empty()) pq.pop();
         pq.push(top);
     }
     
     return sum ;
}
