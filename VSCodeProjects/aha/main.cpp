#include <stdio.h>
#include <iostream>
#include <unistd.h>
using namespace std;
void doudou() {
    int pw,ld=0;
    cout<<"londing..."<<endl;
    while(1){
        cout<<"%"<<ld<<" ";
        fflush(stdout);
        sleep(1);
        // usleep(10000);
        // ld++;
        // if(ld==100){
        //    break;
        // }
    }
}
int main(){
    doudou();
}
