#include<iostream>
#include<algorithm>
using namespace std;

void swap(int* a , int* b)
{
    int temp = (*a) ;
    (*a) = (*b);
    (*b) = temp ;
}
int main()
{
	int t ;
	cin >> t ;
	while(t--)
	{
	    int len ;
	    cin >> len ;
	    int ar[len];
	    for(int i=0;i<len;i++)
	    {
	        cin >> ar[i];
	    }
	    
	    int index,value ;
	   
	    int cnt =  0 ;
	    for(int i=len-1;i>0;i--)
	    {
	        if(ar[i-1] < ar[i])
	        {
	            index = i-1 ;
	            value = ar[i-1] ;
	            cnt++ ;
	            break ;
	        }
	    }
	    int small = index+1 ;
	    for(int j=index+1;j<len;j++)
	    {
	        if(ar[j]>value &&  ar[j]<ar[small])
	        {
	            small = j ;
	        }
	    }
	    swap(&ar[index],&ar[small]);
	    if(!(cnt-1 == len))
	     {
	         sort(ar+(index+1),ar+len);
	     }
	     else
	     {
	         sort(ar,ar+len);
	     }
	    for(int i=0;i<len;i++)
	    {
	       cout<<ar[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
