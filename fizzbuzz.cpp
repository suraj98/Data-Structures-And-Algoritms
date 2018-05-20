#include<iostream>
#include<string>
#include <sstream>
using namespace std;

string* fizzBuzz(int A) {

       // Array Of Strings
        string* s = new string[A] ;

        for(int i=1;i<=A;i++)
        {
            if( (i%3==0) && (i%5 == 0))
            {
                s[i-1]="FizzBuzz";
            }
            else if((i%3)==0)
            {
                s[i-1]="Fizz";
            }
            else if((i%5)==0)
            {
                s[i-1]="Buzz";
            }
            else
            {
                // declaring output string stream
                ostringstream str1;
                // Sending a number as a stream into output
                // string
                str1 << i;
                // the str() coverts number into string
                s[i-1]=str1.str();
            }
        }

        return s;
    }
int main ()
{

int N ;
cin>> N;
string* s = fizzBuzz(N);
for(int i=1;i<=N;i++)
        {
          cout<<s[i-1]<<" ";
        }

return 0;
}
