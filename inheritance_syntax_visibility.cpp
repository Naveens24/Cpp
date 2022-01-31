// Inheritance synatax and visibility mode 

#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

/* Derived Class Syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}{
    class members/method/etc...
}
Note:
1. Default visibility mode is private
2. Private visibility mode: Public members of the base class becomes private members of the derived class
3. Public cisibility mode : Public members of the base class becomes private members of the derived class
4. Private members are never inherited
5. Public mode can  be inherited
 */

// Creating a programmer class derived from employee base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {

        id = inpId;
        int languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();

    return 0;
}
