#include<iostream>
using namespace std;

void staticVarFun();
int main(){
    for(int i = 0; i<5; i++){
        staticVarFun();
        /*if "count" is normal variable, count will be destory after function call once and it
        will be initialize to zero back in
        every function call again but now "count" is keep it's value until program end bcoz it's static variable.*/
    }

    return 0;
}

void staticVarFun(){
    static int count = 0; // static variable is always initialize with zero(if user not initialize, it initialize by default
    cout<<count++; //Once function call, always +1 and keep it's value until program end.
}
