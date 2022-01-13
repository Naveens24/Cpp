#include<iostream>
using namespace std;
int main(){
    // what is a pointer? ---> data type which holds the address of other data typesj
    
    int a = 3;
    int*b= &a;
    b= &a;
    // & --> Address of operator
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is"<<b<<endl;

    // * --> Dereference( Address of) operator

    cout<<"The value at address b is"<<*b<<endl;


return 0;
}
