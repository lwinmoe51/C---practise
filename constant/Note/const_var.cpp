#include<iostream>
using namespace std;

int main(){
    //a constant variable can't modify in runtime
    const int constVar = 3; //all constant variable must be initilized when they're created 
    int regVar = 4;

    cout<<"constVar = "<<constVar<<endl;
    cout<<"regVar = "<<regVar<<endl;

    cout<<"Variable are changing"<<endl;

    //constVar = 8; //if u uncommemnt and run if an error will accour
    //error message:  assignment of read-only variable 
    regVar = 1;

    cout<<"constVar = "<<constVar<<endl;
    cout<<"regVar = "<<regVar<<endl;
}