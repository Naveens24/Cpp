// Key value - it such that excel sheet i.e. to store the marks of the student4
//Map is an associative array
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, int> marksMap;
    marksMap["Naveen"] = 88;
    marksMap["Lav Dev"] = 85;
    marksMap["Shubh"] = 95;

    marksMap.insert({{"Shikhar",67},{"Rahul", 57}});

    map<string, int> :: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    cout<<"The size is : "<<marksMap.size()<<endl;
    cout<<"The max size is : "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is : "<<marksMap.empty()<<endl;



return 0;
}
