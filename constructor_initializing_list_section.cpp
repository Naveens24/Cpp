// initialization list and initialization section

#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument- list): initialization-section
{
    assignment _ other code;
}
class Test{
    int a;
    int b; 
    public:
        Test(int i, int j): a(i), b(j){constructor-body}
};

*/
class Test{
    int a;
    int b; 
    public:
        // Test(int i, int j): a(i), b(j)
        // Test(int i, int j): a(i), b(i+j)
        // Test(int i, int j): a(i), b(i+j)
        // Test(int i, int j): a(i), b(a+j)
        // Test(int i, int j):  b(j), a(i+b) //-->RED Flag this will create problems because a will be intitialized first bcz it is declared first
        Test(int i, int j): a(i), b(j)
        {
            cout<<"Constructor executed "<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
            }
};

int main(){
    Test t(4,5);

return 0;
}
