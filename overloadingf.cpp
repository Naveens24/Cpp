// Overloading - Nam hai ek kam hai anek
#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using th function with 2 arguments"<<endl;
    return a+b;
}

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14*r*r*h);
}

//Calculate the voume of a cube 
int volume(int a){
    return a*a*a;
}

//Rectangular box
int volume (int l, int b, int h){
    return(l*b*h);
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}
int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;
    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"The volume of cuboid of radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"The volume of cube of side is "<<volume(3)<<endl;
    return 0;
    
}
