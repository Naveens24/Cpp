// Function Prototype  (isko hm function ko bad me declare krte hai agr hm isko bina use kre jo function banaye hai use last me likhenge to error ayega 
// (agr hm funtion prototype ka use krte hai to koi dikkat nhi ayega chahe hm funtion ko bad me likhe ya phle )

#include<iostream>
using namespace std;

// type function-name(arguments);  --- This is Syntax(mtlb aise likhna hai)
// int sum (int a, int b);    // --> Acceptable mtlb ye hai ki hmko dono bar int likhna pdega 
// int sum (int a, b);    // --> Not-Acceptable
int sum (int , int);    // --> Acceptable  isliye hai kyuki hmko int likhna jruri hai naki variable declare krna okkk......

int main(){
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
  // here num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1,num2);

    
return 0;
}
int sum(int a, int b){
  // formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;
    return c;
}
