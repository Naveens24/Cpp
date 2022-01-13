#include<iostream>
using namespace std;

// union money{
//     int rice; //4
//     char car; //1
//     float pounds; //4
// };

// int main()
// {
//     // struct money naveen;
//     union money m1;
//     m1.rice = 34;
//     m1.car = 'c';
//     cout<<m1.car;
// };

int main()
{
    enum Meal { breakfast , lunch,dinner}; // here meal is now become datatype
    Meal m1 = lunch;            
    cout<<(m1==1); 
    // also can eddit m1==2           // here enum allocate the number 102 to the breakfast, lunch, dinner respectively
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
};



