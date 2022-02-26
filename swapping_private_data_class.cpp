#include<iostream>
using namespace std;

class class_2;

class class_1
{
    int value1;
    public:
        void indata(int a) {value1 = a;}
        void display(void) {cout <<value1 <<"\n";}
        friend void exchange(class_1 &, class_2 &);

};

class class_2
{
    int value2;
    public:
        void indata(int a) {value2 = a;}
        void display(void) {cout<<value2 <<"\n";}
        friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 &x , class_2 &y)
{
    // int x, y;
    // cout<<"Programmer to swap two numbers ";
    // cout<<"Enter the first number ";
    // cin>>x;
    // cout<<"Enter the first number ";
    // cin>>y;
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;

}

int main()
{
    class_1 c1;
    class_2 c2;
    int x, y;
    cout<<"Programmer to swap two numbers "<<endl;
    cout<<"Enter the first number ";
    cin>>x;
    cout<<"Enter the first number ";
    cin>>y;

    c1.indata(x);
    c2.indata(y);

    cout<<"values before swapping "<<"\n ";
    c1.display();
    c2.display();
    exchange(c1, c2); // swapping

    cout<<"values after swapping "<<"\n ";
    c1.display();
    c2.display();

    return 0;
}
