
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // connectiong our file with hout stream
    ofstream hout("sample60.txt");      // Note that here the sample60.txt file is created separetly to read and write the programme 

    // Creating a name variable enterd by the user
    cout<<"Enter your name";
    string name;
    cin>>name;

    // Writing a string to the file
    hout<<name + " My name is ";

    //Closing the file
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is "<<content;
    hin.close();

    return 0;
}
