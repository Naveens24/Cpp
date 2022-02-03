// How to resolve the ambiguity if the to function of classes are colliding in the derived class .... solution is given below in two method ... ook 

#include<iostream>
using namespace std;

class Base1 {
    public:
        void greet(){
            cout<<"How are you? "<<endl;
        }

};

class Base2 {
    public:
        void greet()
        {
            cout<<"kaise ho?"<<endl;
        }

};

class Derived : public Base1, public Base2 {
    int a;
    public:
        void greet(){
            Base2 :: greet();
        }

};

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D : public B{
    int a;
    // D's new say() method will override base class's B say() method
    public:
        void say(){
            cout<<"Hello my beautiful people "<<endl;
        }
};

int main(){
    // Ambiguity 1
    /*Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();*/

    B b;
    b.say();

    D d;
    d.say();
return 0;
}
