#include <stdio.h>
#include <iostream>
#include <unistd.h>
using namespace std;
void doudou() {
    int ld=0,num=0;
    char pswd,press,gm;
    string name;
    cout<<"londing..."<<endl;
    while(1){
        cout<<"%"<<ld<<" ";
        fflush(stdout);
        sleep(1);
        ld++;
        if(ld>10){
            break;
        }
    }
    cout<<endl;
    while(1){
        cout<<"what's the password?"<<endl;
        cin>>pswd;
        if(pswd=='l'){
            break;
        }
    }
    cout<<"Hello,what'your name?"<<endl;
    cin>>name;
    cout<<"Hello ^_^,what can I do for you?"<<endl;
    sleep(1);
    cout<<"notice: press 'e' to end this program"<<endl;
    sleep(1);
    cout<<"notice: press 'p' to play a game"<<endl;
    while(1){
        cin>>press;
        if(press=='e'){
            cout<<"This is program 1.0"<<endl;
            cout<<"made with wenboLi"<<endl;
            cout<<"Have a good time!Bye! ^_^"<<endl;
            return;
        }else if(press=='p'){
            cout<<"please wait..."<<endl;
            sleep(3);
            cout<<"press 'l' to leave"<<endl;
            cout<<"press 'n' to type a number(1,2,3...)"<<endl;
            cout<<"press other letters there will a suprise!"<<endl;
            cout<<"let's play!"<<endl;
            while(1){
                cin>>gm;
                if(gm=='n'){
                    cout<<num;
                    fflush(stdout);
                    num++;
                }else if(gm=='l'){
                    break;
                }else{
                    cout<<"`~!@#$%^&*()_+"<<endl;
                }
            }
        }
        
    }
}
int main(){
    doudou();
}
