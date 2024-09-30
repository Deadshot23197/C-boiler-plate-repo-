// main.cpp
 /*#include <iostream>
using namespace std 
{
    
} // namespace std 

struct Coordinates
{
    double age, year, value ; 
};
// Code for multi - level inheritance
class Parent_Class1
{
private:
    Coordinates coords ; 
     
    public : 
    Parent_Class1() {}
    Parent_Class1(double Placeholder1, double Placeholder2, double Placeholder3) : coords { Placeholder1,Placeholder2,Placeholder3  } 
    {
       cout<<" The Parent Class constuctor is called " << endl ; 
    }
    Coordinates get_function()
    {
        return coords;
    }  
}; 
    class derived_Class1 : public Parent_Class1
    {
       protected : int  p1 , p2 , p3 ; 
         derived_Class1 ()  { }
       derived_Class1 (double  &Place_holder3, double  &Place_holder4, double &Place_holder5  ) : p1(Place_holder4 ), p2(Place_holder5 ) , p3( Place_holder6 )
        {}

            void display_func()
            {
           Coordinates coords =  get_function();
        std::cout << "Derived Class: Values are - age: " << coords.age 
                  << ", year: " << coords.year << ", value: " << coords.value << std::endl;
            }
        } ; 

    int
    main()
    {
         Parent_Class1 object_1  (23 , 2005 , 43) ; 
         Parent_Class1 Object_ 2 ( 34 , 1995 , 34) ; 
         Parent_Class1 object_3 ( 54 ,1964, 12); 
          derived_Class1 show ((object_1)  ,(object_2 ), (object_3 ) ) ; 
           show.display_func() ; 
            cout << " The value of Objects  is :"<<show.display_func()  << endl ;  */
           
        
          
          

    #include <iostream>

struct Coordinates
{
    double age, year, value;
};

// Parent Class
class Parent_Class1
{
private:
    Coordinates coords;

public:
    // Default constructor
    Parent_Class1() {}

    // Parameterized constructor to initialize the Coordinates struct
    Parent_Class1(double Placeholder1, double Placeholder2, double Placeholder3)
        : coords{Placeholder1, Placeholder2, Placeholder3}
    {
        std::cout << "The Parent Class constructor is called" << std::endl;
    }

    // Function to return the Coordinates struct
    Coordinates get_function()
    {
        return coords;
    }
};

// Derived Class that inherits from Parent_Class1
class derived_Class1 : public Parent_Class1
{
private:
    // Integer variables for storing the derived class data
    int p1, p2, p3;

public:
    // Default constructor
    derived_Class1() {}

    // Parameterized constructor to initialize p1, p2, p3 with values from Coordinates struct
    derived_Class1(Coordinates coords1, Coordinates coords2, Coordinates coords3)
        : p1(coords1.age), p2(coords2.year), p3(coords3.value)
    {}

    // Function to display the derived class and parent class values
    void display_func()
    {
        std::cout << "Derived Class: Values are - p1 (age): " << p1
                  << ", p2 (year): " << p2 << ", p3 (value): " << p3 << std::endl;
    }
};

int main()
{
    // Creating Parent_Class1 objects with age, year, and value
    Parent_Class1 object_1(23, 2005, 43);
    Parent_Class1 object_2(34, 1995, 34);
    Parent_Class1 object_3(54, 1964, 12);

    // Create derived class object using the Coordinates struct from the parent class
    derived_Class1 show(object_1.get_function(), object_2.get_function(), object_3.get_function());

    // Display the values of the derived class
    show.display_func();

    return 0;
}
