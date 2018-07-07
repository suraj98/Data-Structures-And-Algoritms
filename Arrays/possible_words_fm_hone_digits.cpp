/*
https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits/0/?track=Placement
*/

#include<iostream>
#include<string.h>
using namespace std;
const char hashtable[10][5] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void func(int arr[],int start ,int n,char output[])
{
   
    if(start == n)
    {
        cout<<output<<" ";
    }
    for(int i=0;i<strlen( hashtable[arr[start]] );i++)
    {
       output[start] =  hashtable[arr[start]][i] ;
       func(arr,start+1 ,n,output) ;
       if(arr[start]==1 || arr[start]==0 )
       {
           return ;
       }
    } 
}

int main()
{
   int t ;
   cin >> t ;
   while(t--)
   {
    int n ;
    cin >> n ;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }
    arr[n]='\0';
    char output[n+1] ;
    output[n]='\0';
    func(arr,0,n,output);
    cout<<"\n";
   }
	
	return 0;
}
