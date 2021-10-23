#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setdata(void){
            cout<<"Enter the id " <<endl;
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        }
        static void getcount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};


int Employee::count;//static variable default value is 0
int main (){
    Employee harry,rohan,lavish;
    harry.setdata();
    harry.getdata();
    Employee::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee::getcount();//staic function only access the static member or variable.
    // we can use also access the function by the name of the class with the help of the scope resolution operator.
    lavish.setdata();
    lavish.getdata();
    Employee::getcount();

    return 0;
}


