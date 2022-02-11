// Template function overloading
#include<iostream>
using namespace std;

template<class T>
class Naveen{
    public:
        T data;
        Naveen(T a){
            data = a;
        }
        void display();
        
};

template <class T>
void Naveen<T> :: display(){
            cout<<data;
        }

void func(){
    cout<<"I am first func()"<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am templatised  func()"<<a<<endl;
}

int main(){
    // Naveen<int>n(5);
    // Naveen<float>n(5.56);
    // Naveen<char>n('n');
    // cout<<n.data<<endl;
    // n.display();

    func(4); // Exact match takes the highest priority

return 0;
}
