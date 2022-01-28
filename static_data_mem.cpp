// Static data member and static data function.....

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<"and this is empoyee number"<<count<<endl;
        
    }
    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee :: count;  //Default value is zero, here also we can change the value of count =100 or any other number

int main()
{   
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count = 1; // cannot do this as id and count are private
    harry.setData();
    harry.getData();
    Employee::getCount();
    
    rohan.setData();
    rohan.getData();
    Employee::getCount();
           
    lovish.setData();
    lovish.getData();
    Employee::getCount();
    return 0;
}
