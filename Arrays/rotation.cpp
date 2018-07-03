/* Question Link : https://practice.geeksforgeeks.org/problems/rotation/0 */
#include<iostream>
using namespace std;
int search(int arr[],int low ,int high)
{
    int  index = 0 ;
    int maxx =  arr[0]; 
    for(int i = 1 ; i<=high ;i++)
        {
          if(arr[i-1] > arr[i])
             {
              index = i-1 ;
              break ;
             }
             if( i == high)
             {
                 index = high ;
             }
        }
    if(index == high)
    {
        return 0 ;
    }
    else
    {
        return index+1;
    }
}
int main()
 {
    int n ; 
    cin >> n ;
    while(n--)
    {
        int n1 ;
        cin >> n1 ;
        int arr[n1];
        for(int i=0;i<n1;i++)
        {
            cin >> arr[i] ;
        }
       cout<< search(arr,0,n1-1)<<"\n";
       
    }
	return 0;
}
