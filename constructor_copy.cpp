#include<iostream>
using namespace std;

class Number{
    int a ;
    public:
        Number(){                       // Default constructor which neccessary otherwise it will thorw error
            a = 0;

        }   
        Number(int num){
            a = num;

        } 

        // Whe no copy constructor is found, compile supplies its own copy constructor
        Number(Number &obj ){
            cout<<"copy constructor is called "<<endl;
            a = obj.a;

        } 
    
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    Number z1(z);  // Copy constructor invoked
    z1.display();

    z2 = z; //Copy constructor not called bcz it is already called above
    Number z3 = z;
    z3.display();
    // z1 to make as it resemble the z or x or y --> copy constructor
return 0;
}
