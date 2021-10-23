#include <iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}
int main(){
    int num1,num2;
    cout<<"enter fisat no. :";
    cin >> num1;
    cout<<"enter secound no. :";
    cin>>num2;
    cout<<"the sum of two numbers is :"<<sum(num1,num2);
    return 0;
}
