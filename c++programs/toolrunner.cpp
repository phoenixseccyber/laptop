#include <iostream>

using namespace std;


int main(){
    cout<<"********************TOOL RUNNER *********************"<<endl;
    cout<<"*************** by phoenixcybersec **********************"<<endl;

    cout<<"1. nmap "<<endl;
    cout<<"2. metasploit "<<endl;
    cout<<"3. sqlmap "<<endl;
    cout<<"4. vscode "<<endl;

    cout<<"enter the number which tool you want to use select from the above menu "<<endl;
    int a;

    cin>>a;
    string sudo1,sudo2,sudo3,sudo4,echo;
    sudo1= "nmap";
    sudo2= "msfdb init && msfconsole";
    sudo3= "sqlmap";
    sudo4="code";
    if(a==1){
        cout<<sudo1<<endl;
    }
    else if (a==2){
        cout<<sudo2<<endl;
    }
    else if (a==3){
        cout<<sudo3<<endl;
    }
    else if (a==4){
        cout<<sudo4<<endl;
    }
    else
    cout<<" You enter the wwrong number ";

}