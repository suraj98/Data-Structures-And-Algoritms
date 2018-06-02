#include<iostream>
#include<queue>
using namespace std;


/*
Question Link :- https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream/0
    Given an input stream of n characters consisting only of small case alphabets the task is to find the first non repeating character each time a character is inserted to the stream.

Example

Flow in stream : a, a, b, c
a goes to stream : 1st non repeating element a (a)
a goes to stream : no non repeating element -1 (5, 15)
b goes to stream : 1st non repeating element is b (a, a, b)
c goes to stream : 1st non repeating element is b (a, a, b, c)

*/


int main()
 {
    int t ;
    cin >> t ;
    while(t--)
    {
       int n ;       // No of Input
       cin >> n ;

       int ch[26] ; // Integer Array to store count of each char
       char ar[n];  // Input Char Array

       for(int i=0;i<26;i++)
         {
           ch[i] = 0 ;  // Initialize cout to zero
         }

       for(int i=0;i<n;i++)
       {
           cin >> ar[i] ;   // Input Char in Array
       }

       queue<char>q;        // queue to store first non-repeat char

      for(int i=0;i<n;i++)
      {
          ch[ar[i]-'a']++;  // Count occurance of char
          if( ch[ar[i]-'a'] <= 1)
          {
             q.push(ar[i]) ; // sequence of Non-reapeating char
          }

          if(   ch[q.front()-'a']<=1  ) //  non-reapeat char for current element
          {
              if(!q.empty())
              {
                  cout<<q.front()<<" ";
              }
              else
              {
                  cout<<"-1 ";
              }
          }
          else
          {

              if(!q.empty())
              {
                  while( (ch[q.front()-'a'] >1)  && !q.empty()  ) // Eliminate duplicate element from queue
                  {
                      q.pop();
                  }
                  if(!q.empty())
                  {
                     cout<<q.front()<<" ";
                  }
                  else
                  {
                      cout<<"-1 ";
                  }
              }
              else
              {
                  cout<<"-1 ";
              }
          }

      }
          cout<<"\n";
    }
	return 0;
}
