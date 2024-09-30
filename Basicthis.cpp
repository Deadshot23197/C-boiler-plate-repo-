#include<iostream>
using namespace std;
 
 class Base_Class 
  { 
     private  : 
      string   name  ;  
        int age   ; 
     double  year ; 
      public : 
       int pointer = 0 ; 
      Base_Class ()   {}   

       
        Base_Class   (    const  std:: string  & name ,  int age , double   Salary )  { 
            
            this -> name = name ; 
            this -> age = age ; 
            this -> year = year ; 
                
               // print statement for values  before checking for newline " / n " operator 
                cout << "The current name  is " << name << endl 
                 << "The current age of the candidate is : " << age << endl 
                  << "The current Salary of the canditdate is " << Salary << endl  << endl ; 
                    //  This will store the  new candidate name  without the  new line character 
              string Update_name ;

             while ( pointer  < name.length() &&   name[pointer ] != '\n' ) { 
            
                // Reads as 
                    Update_name += name[pointer]  ;  
             pointer ++ ; 
        }
    std:: cout << " the  new name of the candidate without the newline terminator is : "<< Update_name  << endl ; 
     
           
             }       
  }; 
   int main() {  
  //  Base class is initialized with pointers 

      
    Base_Class  Object(  " Aditya  "  , 23 , 13500.34); 
     return 0 ;  
   } 

       