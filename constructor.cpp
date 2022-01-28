#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    // creating a constructor  (it is a function)
    // constructor is a special member function with the same name as of the class. 
    // It is used to initializ the objects of its class
    // It is automatically invoked (call krna means execute) whenever an object is created
    complex(void); //constrcto declaration 
    void printNumber()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i "<<endl;
    }
};

complex :: complex(void) // --> This is  a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
}
int main(){
    complex c;
    c.printNumber();
    return 0;
}

/* Properties of constructors
1. It should be declared in the publeic secion of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types 
4. It can have default arguments.
5. We cannot refer to their address

*/
