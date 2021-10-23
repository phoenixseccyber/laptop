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
};

int Employee::count;//static variable default value is 0
int main (){
    Employee harry,rohan,lavish;
    harry.setdata();
    harry.getdata();
    
    rohan.setdata();
    rohan.getdata();
    
    lavish.setdata();
    lavish.getdata();
    return 0;
}


