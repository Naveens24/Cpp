// Main movtive to use the vector is to make the array resizeable

#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    cout<<"The entered element are ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
    
}

int main(){
    // ways to create vector 
    vector<int> vec1;   // Zero length vector
    
    int element, size=5;
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector  ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // // vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,5, 566);   // here vec1.insert(iteratorname, no.of iterator to print, value )
    // display(vec1);    

    vector<char>vec2(4); // 4-element character vector
    // vec2.push_back('5');
    // display(vec2);
    // vector<char>vec3(4); // 4-element character vector from vec2
    // display(vec3);
    vector<int> vec4(6,3);  // 6-element vector of 3s
    display(vec4);
    cout<<vec4.size();
return 0;
}
