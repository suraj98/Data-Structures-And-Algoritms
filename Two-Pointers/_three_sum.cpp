int Solution::threeSumClosest(vector<int> &A, int B) 
{
    sort(A.begin(),A.end());
    int len = A.size();
    int sum ;
    int maxsum = 1000000000 ;
    int soln = 0;
    for(int i=0;i<len-2;i++)
    {
        int j = i+1 ;         // Pointer One
        int k = len-1;        // Pointer Two
        while( j < k)
        {
            sum = A[i]+A[j]+A[k];
            if( abs(B-sum) < abs(B-maxsum)  )
            {
                maxsum  = sum;
                soln  = A[i]+A[j]+A[k];
            }
            else if( sum  <  B)
            {
                j++;
            }
            else
            {
                k--;
            }     
        }  
    }
     
return soln ;
}
