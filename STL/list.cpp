// List is such a way of horizontal sequence of value or we can say element 
#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    
    }
    cout<<endl;
    

}
int main(){
    list<int> list1;  // List of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    //Removing elements from the list
    // list1.pop_front();  // To delete the element from front
    // list1.pop_back();   // To delete the element from back
    // list1.remove(9);   // To delete the element from between with calling the element value directly
    // display(list1);

    //Sorting the list
    // list1.sort();
    // display(list1);

    //Reversing the list
    list1.reverse();
    display(list1);

    list<int> list2(3); //Empty list of size 7, no element on the value
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 5;
    iter++;
    *iter = 55;
    iter++;
    display(list2);
    list1.merge(list2);
    cout<<"List 1 after merging: ";
    display(list1);

    
return 0;
}
