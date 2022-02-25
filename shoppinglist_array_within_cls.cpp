// Making a programme to edit the shopping list by using Arrays Within a Class
#include<iostream>
using namespace std;

const int m=50;

class Items{
    int itemcode[m];
    float itemprice[m];
    int count;
    public:
        void CNT(void){count =0;} // initializes count to 0
        void getitem(void);
        void displaySum(void);
        void remove(void);
        void displayItems(void);


};

void Items :: getitem(void)       // assign values to dat members of item
{
    cout<<"Enter the item code : ";
    cin>>itemcode[count];
    cout<<"Enter item cost : ";
    cin>> itemprice[count];
}

void Items :: displaySum(void)
{
    float sum = 0;
    for(int i = 0; i<count; i++)
    sum = sum + itemprice[i];
    cout<<"\n Total value : "<<sum<<"\n";

}

void Items :: remove(void)
{
    int a;
    cout<<"Enter item code : ";
    cin>>a;
    
    for (int i = 0; i < count; i++)
     if(itemcode[i]==a)
     itemprice[i] = 0;
    
}

void Items :: displayItems(void)
{
    cout<<"\n Code prices\n";
    for (int i = 0; i < count; i++)
    {
        cout<<"\n"<<itemcode[i];
        cout<<" "<<itemprice[i];
    }
    cout<<"\n";
}
//------------------------------------------------------

int main()
{
    Items order;
    order.CNT();
    int x;

    do
    {
        cout<<"\nYou can do the following ;"
            <<"Enter appropriate number\n";
        cout<<"\n1 : Add an item ";
        cout<<"\n2 : Display total value ";
        cout<<"\n3 : Delete an item";
        cout<<"\n4 : Display all items";
        cout<<"\n5 : Quit"<<endl;
        cout<<"Enter the no. what you want to do : ";

        cin>>x ;

        switch(x)
        {
            case 1: order.getitem(); break;
            case 2: order.displaySum(); break;
            case 3: order.remove(); break;
            case 4: order.displayItems(); break;
            case 5: break;
            default: cout<<"Error in input: try again\n";

        }


    } while (x != 5);   //do while ends
    
return 0;
}
