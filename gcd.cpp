// main.cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<int> arrayp = {12, 36, 48};
    int mass = arrayp.size();
     int j = 0;
    int i = 0 ; 
    int  potential_hcf = arrayp[0] ; 
    // we need to  assume that the smallest element in the arrayp can be the hcf we are looking for 
    bool is_hcf = true ; 
     for ( int i = 0 ; i < mass ; i ++ ) { 
    // assuming that 
         is_hcf= true ; 
     }
   for ( int j = 0  ; j < mass ; j ++) 
    {
        if  (arrayp[i] % arrayp[j] != 0  ) { 
            is_hcf = false  ; 
            break ; } 
              if ( is_hcf ) { 
                 cout <<"the greatest common factor in the array is : "<<arrayp[i] << endl ; 
                return 0 ; 
                // Exits the program if potential_hcf is the hcf 
              
              }    
        }
         cout<<"NO hcf let alone common factor was found in the provided array list " << endl ; 
             return 1 ;
    }
   
