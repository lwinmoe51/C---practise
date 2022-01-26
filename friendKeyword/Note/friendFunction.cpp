//friend keyword can access private member of the class 
//similar to friend functions, u can define a friend class, which has access to the private members of another class
#include<iostream>
using namespace std;

class MyClass{
    private:
        int regVar;
    public:
        void intiVar(){
            regVar = 1;
            cout<< "not chagne regVar = "<<regVar<<endl;
        }
    
    friend void friFun(MyClass &myObj);
    //same1
    //friend void friFun(MyClass myObj);
    //same2
    //friend void friFun(MyClass *myObj);
};

void friFun(MyClass &myObj){
    myObj.regVar = 4;
    cout<<"Change by friFun = "<<myObj.regVar;
}

//same1
/*void friFun(MyClass myObj){
    myObj.regVar = 4;
    cout<<"Change by friFun = "<<myObj.regVar;
}*/

//same2
/*void friFun(MyClass *myObj){
    myObj->regVar = 4;
    cout<<"Change by friFun = "<<myObj->regVar;
}*/

int main(){
    MyClass myObj2;
    myObj2.intiVar();
    friFun(myObj2);
    //same1
    //friFun(myObj2);
    //same2
    //friFun(&myObj2);
}