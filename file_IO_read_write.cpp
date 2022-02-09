#include<iostream>
#include<fstream>

/*The usefull classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase.

in order to work with files in C++, you will have to open it. primarily, 
there are 2 ways to open a file :
1. Using the constructor
2. Using the member function open() of the class */
using namespace std;

int main(){
    string st = "Naveen bhai";
    string st2;
    //Open file using constructor and writing it
    // ofstream out("sample60.txt");  // write operation
    // out<<st;

    //Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // read operation
    // in>>st2;
    getline(in, st2);
    cout<<st2;
return 0;
}
