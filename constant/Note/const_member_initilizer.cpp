//member initialization list example
//member initialization list may be used for regular variables and must be used for constant variables
#include<iostream>
using namespace std;

class MyClass{
    private:
        int regVar;
        const int constVar;
    public:
        //All const var and function must initialize in their creation 
        //this is the const member initialization list syntax 
        MyClass(int a, int b) : regVar(a), constVar(b){//initialization list
            //do something;
            cout<<"regVar = "<<regVar<<endl;
            cout<<"constVar = "<<constVar<<endl;
        }

        //ERROR CODE
        /*
        MyClass(int a, int b){
            regVar = a;
            constVar = b;
        }
        */

};
int main(){
    MyClass myObj(1,3);
}