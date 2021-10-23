#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "harry";

    cout<<"The name is :"<<name;
    cout<<"The length is :"<<" "<<name.length()<<endl;
    cout<<"The Name is :"<<name.substr(1,155)<<endl;
    cout<<"The name is :"<<name.substr(2,3);
    return 0;
}


