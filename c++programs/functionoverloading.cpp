#include <iostream>
using namespace std;

int sum(int a,int b){
    return a+ b;
}

int sum(int a,int b,int c){
    return a+b+c;
}


int main(){
    int a,b ,c,d,e;
    cout<<"enter the two integer value to sum :  ";
    cin>>a>>b;
    cout<<"enter the three integers value u want to sum :  ";
    cin>>c>>d>>e;
    cout<<"sum of 3 and 6 is  "<<sum(a,b)<<endl;
    cout<<"sum of 3,7 and 6 is "<<sum(c,d,e)<<endl;
    return 0;
}