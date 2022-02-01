#include<iostream>
using namespace std;

class Base{
    protected:         // It can be inherit and also it cant be changed!!
        int a;
    private:
        int b;
};
/*
For a protected member:
                            Public derivation   Private derivation   Protected derivation
    1. Private members      Not inherited       Not Inherited           Not Inherited
    2. Protected members    Protected           Private                 Protected   
    3. Public members       Public              Privated                Protected

*/
class Derived : protected Base{

};

int main(){
    Base b;
    Derived d;
    cout<<b.a;  //Will not work since a is protected in both base as well as derived class

return 0;
}
