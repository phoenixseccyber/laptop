#include <iostream>
using namespace std;

int main(){
     int marks[4]={23,45,56,89};
    // marks[2]=55; you can change the value in array
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // does not working
    int *p=marks;
    cout<<"the value of marks[0] is : "<<*p<<endl;
    cout<<"the value of marks[1] is : "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is : "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is : "<<*(p+3)<<endl;
    return 0;
}