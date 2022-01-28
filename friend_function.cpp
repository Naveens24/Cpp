#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;

    }

    friend complex sumcomplex(complex o1, complex o2);    // yha dekho yhaa frien function bna hua hai jo apne private data ko access kr skta hai koi complex , sirf declare kr skta hai koi part nhi bn jata
    void printNumber(){
        cout<<"You number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    complex c1, c2, sum;
    c1.setNumber(1, 5);
    c1.printNumber();
    c2.setNumber(2, 5);
    c2.printNumber();

    sum = sumcomplex(c1, c2);
    sum.printNumber();

return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it si not in the scope of the class, it cannot be called from the object of
that class. c1 sumcomplex() == invalid
3. Can be invoke wihtour the help of any object
4. Usually contains the objects as the argument
5. Can be declared inside public or privaate section of the class
6. It cannot access the members directly by their names and need object_name.member_name
to acces ant member.
*/
