
// Classes public, private access modifiers 

#include<iostream>
using namespace std;


class Employee
{
    private:
        int a, b, c;

    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is"<<a<<endl;
            cout<<"The value of b is"<<b<<endl;
            cout<<"The value of c is"<<c<<endl;
            cout<<"The value of d is"<<d<<endl;
            cout<<"The value of e is"<<e<<endl;
        }
};

void Employee :: setData(int a1 ,int b1, int c1){
    a = a1;
    b = b1;
    c = c1;

}

int main(){
    Employee harry;
    // harry.a= 23; ---> It will throw error bcz it is private once
    harry.d = 34;
    harry.e = 85;
    harry.setData(1,2,5);
    harry.getData();
    
return 0;
}
