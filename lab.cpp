// MyClass.h

#include <string.h> 
#include <string> 
#ifndef MYCLASS_H
#define MYCLASS_H
#include <string>
#include<iostream>
using namespace std ; 

class MyClass {
public:
    string* This_function(   char *  name , int count ) {
string* result = new string[count]; 
    for ( int i = 0 ;i <count  ; i ++ ) {  
result[i] = name; 
};
 return result ; 
    }; 
} ; 

#endif // MYCLASS_H
int main () { 
    MyClass obj;  
     int n ; 
     cout<<"Enter total characters in your string literal "<< endl ; 
    cin >> n ; 
    string * str =   obj.This_function("Aditya",n )  ; 
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;  // Print each string in the array
    }

    delete[] str;  // Free dynamically allocated memory 
}