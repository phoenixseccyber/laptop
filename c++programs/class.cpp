#include <iostream>
using namespace std;

class employee{
    public:
    string name;
    int salary;

    employee(string n, int s,int sp){
        this->name=n;
        this->salary=s;
        this->secretpassword=sp;
    }
    void printdetails(){
        cout<<"The name of first employee is "<<this->name<<"and his salary is "<<this->salary<<"dollar"<<endl;

    }
    void getsecretpassword(){
        cout<<"The secret password of employee is "<<this->secretpassword;
    }
    private:
    int secretpassword;
};

int main(){
    employee har("harry constructor",344,30224);
    har.name="harry";
    har.salary=100;
    har.printdetails();
    cout<<"The name of our first employee is "<<har.name << "and this salary is "<<har.salary << "dollars "<< endl;
    har.getsecretpassword();
    return 0;
}