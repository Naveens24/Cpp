// Array of objects using pointers

#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:     
        void setdata(int a , float b){
            id = a;
            price =b;
        }

        void getData(void){
            cout<<"Code of this is "<<id<<endl;
            cout<<"Price of this is item is "<<price<<endl;
        }
};

int main(){
    int size = 3;
    // int *ptr = &size; example hai ye of -> pointe is like that cotainer to store somthing
    // int *ptr = new int [34];  //--> 34 block memory store krne ka space in compiler
    ShopItem *ptr = new ShopItem[size];   // Here shop is used as data type i.e int data type , float etc.
    ShopItem *ptrTemp = ptr;
    int p, q, i;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item  " <<i+1<<endl;
        cin>>p>>q;
        // *(ptr)setdata(p, q);
        ptr->setdata(p,q);
        ptr++;
    }

    for ( i = 0; i < size; i++)
    {
        cout<<"Item number "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    
return 0;
}
