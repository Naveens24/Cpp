#include<iostream>
using namespace std;

struct employee
{
    int eId;
    char name;
    float salary;

};

int main()
{
    struct employee naveen;
    naveen.eId = 7;
    naveen.name = 'k';
    naveen.salary = 100000000;

    cout<<"This value is "<<naveen.eId<<endl;
    cout<<"This value is "<<naveen.name<<endl;
    cout<<"This value is "<<naveen.salary<<endl;


    return 0;

}
