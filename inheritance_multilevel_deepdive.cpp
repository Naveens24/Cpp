#include<iostream>
using namespace std;

/*Syntax for inherting in multiple inheritance
class DerivedC : visibility-mode base , visibility - mode base 2
{
    class body of class DerivedC
}; */

class Base1 {
    protected: 
        int base1int ;
    public: 
        void set_base1int(int a){
            base1int = a;
        }
};

class Base2 {
    protected: 
        int base2int ;
    public: 
        void set_base2int(int a){
            base2int = a;
        }
};

class Base3 {
    protected: 
        int base3int ;
    public: 
        void set_base3int(int a){
            base3int = a;
        }
};

class Derived : public Base1, public Base2, public Base3 {

    public:
    void show(){
        cout << "The value of Base1 is "<< base1int<<endl;
        cout << "The value of Base2 is "<< base2int<<endl;
        cout << "The value of Base3 is "<< base2int<<endl;
        cout << "The sum of these values is "<< base1int + base2int + base3int<<endl;
    }
};
/*
The inherited derived class will look something like this:
Data members:
    base 1 int --> protected
    base 1 int --> protected
Member functions:
    set_base1int() --> public
    set_base2int() --> public
    set_show() --> public


*/

int main(){
    Derived Naveen;
    Naveen.set_base1int(2);
    Naveen.set_base2int(5);
    Naveen.set_base3int(6);
    Naveen.show();
return 0;
}
