// Inline function , Default Argument, Constant Argument

#include<iostream>
using namespace std;

inline int product(int a, int b){
    // Not recommended to use below lines with inline functions
    // static int c=0; //This execute only once
    // c= c +1 ; // Next time this function is run, the value of c will be retained
    return a*b;
}
int moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}
//int strlen(const char *p){

// }
int main(){
    int a, b;
    // cout<<"Ener the two number a and b";
    // cin>>a>>b;
    // cout<<"The product of two number is a and b"<<product(a,b);
    int money=100000;
    cout<<"If you have"<<money<<"Rs in your bank account, you will receive"<<moneyReceived(money)<<"Rs after 1 year"<<endl;
    cout<<"If you are VIP: have"<<money<<"Rs in your bank account, you will receive"<<moneyReceived(money, 1.1)<<"Rs after 1 year";


return 0;
}
