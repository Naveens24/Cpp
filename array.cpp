// ARRAY
#include<iostream>
using namespace std;
int main(){
    int marks[4] = {23, 45, 56,89};
    int mathMarks[4];

    mathMarks[0] = 2341;
    mathMarks[1] = 434;
    mathMarks[2] = 221;
    mathMarks[3] = 7475;
    
    cout<<"This are mathMarks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    cout<<"This are Marks"<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

// Or ---> Array using loop
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks"<<i<<"is "<<marks[i]<<endl;
    }
    

    //Ponter and arrays
    int*p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    // cout<<"The value of *p is"<<*p<<endl;
    // cout<<"The value of *(p+1) is"<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is"<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is"<<*(p+3)<<endl;

return 0;
}
