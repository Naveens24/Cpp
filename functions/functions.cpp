#include<iostream>
using namespace std;

int sum(int a, int b){   //here we are creating function of sum to add two numbers
    int c = a+b;
    return c;            // yha ps c return kr rhe hai jiska mtlb hai ki c kisi do number ka sum hai 
}

int main(){
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);    // Here we are using the function sum which we have create above 

    
return 0;
}
