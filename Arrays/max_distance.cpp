/*
Question Link:https://www.interviewbit.com/problems/max-distance/#
Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].
If there is no solution possible, return -1.

Example :
A : [3 5 4 2]
Output : 2 
for the pair (3, 4)
*/


int max(int a , int b)
{
    return (a>b)?a:b;
}

int min(int a , int b)
{
    return (a<b)?a:b;
}

int Solution::maximumGap(const vector<int> &A)
{
    int len = A.size();
    if(len == 1)
    {
        return 0;
    }
    int lmin[len];
    int rmax[len];
    
    lmin[0]=A[0];
    for(int i=1;i<len;++i)
    {
        lmin[i] = min(lmin[i-1],A[i]);
    }
    rmax[len-1]=A[len-1];
    for(int i=len-2;i>=0;--i)
    {
        rmax[i] = max(rmax[i+1],A[i]);
    }
    
    int maxdiff = -1 ;
    int i=0,j=0;
    while(i<len && j<len)
    {
        if(lmin[i]<=rmax[j])
        {
            maxdiff = max(j-i,maxdiff);
            j=j+1;
        }
        else
        {
            i=i+1;
        }
    }
    return maxdiff ;
}
