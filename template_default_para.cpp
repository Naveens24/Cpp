//Template with default parameters
#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>   // Here the default parameter is declared
class Naveen{
    public:
        T1 a;
        T2 b;
        T3 c;
        Naveen(T1 x , T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};
int main(){
    Naveen<> n(4, 6.3, 'n');
    n.display();
    cout<<endl;
    Naveen<float, char, char> a(4.36, 'r', 'n');
    a.display();
    
return 0;
}
