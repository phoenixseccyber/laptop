#include <iostream>
using namespace std;
typedef struct  employee
{
        int eID;
        char favchar;
        float salary;
} ep;

int main(){
    ep harry;
    int s;
    float a;
    char b;
    cout<<"enter the eID :  ";
    cin>>s;
    cout<<"enter the salary :  ";
    cin>>a;
    cout<<"enter your favcharacter :  ";
    cin>>b;
    harry.eID=s;
    harry.salary=a;
    harry.favchar=b;
    cout<<"The value is : " << harry.eID<<endl;
    cout<<"The value is : " <<harry.favchar<<endl;
    cout<<"The value is : " <<harry.salary<<endl;
    return 0;
}

