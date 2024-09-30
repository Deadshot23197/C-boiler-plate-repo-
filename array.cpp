// main.cpp
#include <iostream>
#include <vector>
using namespace std;
int* some_func(vector<int> myvector)
{
   // Array points towards this much values
   int n = 5;

   int a = myvector[0];
   int b = myvector.size() - 1;
   int sum = 0;
   int prod = 1;
   int *array = new int[n]; // array points towards 5 bytes of integer values

   for (int i = b; i >= a; i--)
   {
      while (b != a)
      if ( myvector[i] == 1 ) { 
          return 1 ; 
      }
      {
         array[i] =  sum +   myvector[i] * myvector[ i -1 ] ;
      }
      return array ; 
   }
}

int main()
{
   // the following program will replace each index at i with the product of element s
    vector <int> arrayp = {1,2,3,4} ; 
     int* displayresult = ( int *)  new  int some_func(arrayp) ; 
   return 0;
}
