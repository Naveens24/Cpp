// Recursions & Recursive Functions

#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

fib(5)
fib(4) + fib(3)
fib(2) + fib(3) + fib(2) + fib(3)

int factiorial(int n){
    if (n<=1){
        return 1;
    }
    return n *factiorial(n-1);
}

// Step by step calculation
// factiorial4 = 4 * factiorial(3);
// factiorial4 = 4 * 3 factiorial(2);
// factiorial4 = 4 * 3 * 2 factiorial(1);
// factiorial4 = 4 *3 * 2 * 1 ;
// factiorial4 = 24 ;

int main(){
    //Factorial of a number:
    //6! = 6*5*4*3*2*1 = 720
    //0! = 1 by defination
    // 1! = 1 by def.
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    // cout<<"The factiorial fo a is" <<a<< "is" <<factiorial (a)<<endl;
    cout<<"The term in fibonacci sequence at position " << a << " is " <<fib(a)<<endl;
return 0;
}
