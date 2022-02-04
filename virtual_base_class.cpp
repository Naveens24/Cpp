#include<iostream>
using namespace std;
/*
student -->Test
student --> sports
test --> result
sports --> result
*/
class Student{
    protected:
        int roll_no;
    public:
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no. is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2){
                maths = m1;
                physics = m2;

            }

            void print_marks(void){
                cout<<"you restult is here: "<<endl;
                cout<< " Maths: "<<maths<<endl;
                cout<<" Physics: "<<physics<<endl;
            }
};

class Sports: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(void){
            cout<<"Your PT score is " <<score<<endl;
        }

};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is : "<<total<<endl;
        }
};

int main(){
    Result naveen;
    naveen.set_marks(99,88);
    naveen.set_number(600);
    naveen.set_score(24);
    naveen.display();
return 0;
}
