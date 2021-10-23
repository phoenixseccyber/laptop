#include <iostream>
using namespace std;

//  int main()
// }
// {
//     cout<<"******************** for loop program *********************************"<<endl;
//     {   int i;
//         for (i=0;i<3;i++){
//             cout<<"the value of i is :"<<i<<endl;
//         }
//     }
// }
// {
//     cout<<"******************** for loop program *********************************"<<endl;
//     {   int i;
//         for (i=0;i<3;i++){
//             cout<<"the value of i is :"<<i<<endl;
//         }
//     }
//*********************************** while loop program *****************************

// {
//     int index=0;
//     while (index<=34)
//     {
//         cout<<"we are at indx number :"<<index<<endl;
//         index = index+1;
//     }
// }

//**************************  do while loop program ************************

// {
//     int index = 0;
//     do
//     {
//         cout<<"we are at index number :"<<index<<endl;
//         index += 1;
//     } while (index<34);
// }
// {
//     // "******************** for loop program *********************************" << endl;
//     {
//         int i;
//         for (i = 0; i < 3; i++)
//         {
//             cout << "the value of i is :" << i << endl;
//         }
//     }
//  }

// ******************* functions program ***************************
int sum(int a ,int b);
void g();

int main(){
    int num1,num2;
    cout<<"enter first no. :";
    cin >> num1;
    cout<<"enter secound no. :";
    cin>>num2;
    cout<<"the sum of two numbers is :"<<sum(num1,num2);
    g();
    return 0;
}

void g(){
    cout<<"\n Hello!!!";
}

int sum(int a, int b){
    int c=a+b;
    return c;
}

