#include<iostream>
using namespace std;

class MyClass{
    public:
        void printConst() const{
            cout<<"This is const function"<<endl;
        }
        void printReg(){
            cout<<"This is regular function"<<endl;
        }

};
int main(){
    const MyClass myConstObj; //creat const object. This obj can only call const member function. If const obj called non const function , an error will occur.
    //but simple obj can call both const or non const function

    /*constuctor can initilize by constuctor. if class is not initilized using parameterized constructor, a public default constructor must be provided. if no public default constructor is provided, a compiler error will occur.
    */


    /*if u creat const obj via constructor, u cannot modify the obj's member variables. This include both directly making changes to public member variables and calling member function that set the value of member variables.
    */
    //myConstObj.printReg(); //error , constObj can't call regular function
    myConstObj.printConst();
    
    /*regular obj can call regular function and const function*/
    MyClass myObj;
    myObj.printReg();
    myObj.printConst();


}