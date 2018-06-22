/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
 bool myfunc(Interval a,Interval b)
 {
     if(a.start<b.start)
     {
         return true ;
     }
     else if(a.start == b.start)
     {
         return a.end<b.end ;
     }
     return false ;
 }
 
 
 int max(int a ,int b)
 {
     return(a>b)?a:b ;
 }
 int min(int a ,int b)
 {
     return(a<b)?a:b ;
 }
 
 
vector<Interval> Solution::merge(vector<Interval> &A) {
    
    sort(A.begin(),A.end(),myfunc);
    int len = A.size() ;
    int  i=0;
   
    vector<Interval> v ;
    while(i<len)
    {
        Interval curr( A[i].start, A[i].end);
        i++;
        while( (curr.end >= A[i].start) && (i<len) )
        {
            curr.start = min(curr.start,A[i].start);
            curr.end = max(curr.end,A[i].end);
            i++; 
        }
        v.push_back(curr);
 
    }
  return v;   
}
