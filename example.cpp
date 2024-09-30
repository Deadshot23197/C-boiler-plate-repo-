// MyClass.h
#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>

class MyClass {
public:
    MyClass(const std::string& name);
    void greet() const;

private:
    std::string name;
};

#endif // MYCLASS_H