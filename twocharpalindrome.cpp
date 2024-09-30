// main.cpp
//  Write a program to check the longest palindrome from the string provided here
//  doing that  return the palindrome value pointed between the pointers & return the string length too
//  The following solution is a brute - force approach that checks for all the values with the left - most string 
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

string longestpalindrome(const string &str)
 { 
    
    int n;
    cout << "Enter the total characters in your current string: " ;
    cin >> n;
    if (str.empty())
    {
        cout << "" << endl;
    }
       int maxlength = 0  ;  
        int  current_length   ; 
        int start = 0 ; 
    if( n < 2 ) { 
          cout <<" the following string is already a palindrome " << endl ; 
    }
    
    for (int i = 0; i < n; i++)
    {
        int left_pointer = str[0];
        int right_pointer = str.size() - 1;
        while (left_pointer < right_pointer && right_pointer < str.size())
        {
          if ( str[left_pointer ] == str[right_pointer ]  )  { 
            // you can check the if condition with sample string say  22 , 444  etc  : 
             current_length = right_pointer - left_pointer  + 1 ; 
             maxlength = current_length ; 
             //resets the left pointer to the start of array 
              start = left_pointer ; 
          }
           right_pointer ++ ; 
           return str.substr(start, maxlength);
    }
    left_pointer ++  ; 
}
return str  ; 
} 
int main()
{
    // give a samnple string with two  unique characters to  the compiler
    string longpalin = "ababba";

    string displaylongplain = longestpalindrome(longpalin);

    cout << "The longest palindrome  inside the current provided string is : " << displaylongplain << endl;
    cout << "The lenght of the palindrome in hand is " << displaylongplain.length() << endl;
    cout << endl;
    return 0;
}
