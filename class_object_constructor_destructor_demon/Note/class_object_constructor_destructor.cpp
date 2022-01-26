/*This program show 2 way to creat object and 3 way to access class members (function and variable) depend on the way of
creating object. And also show what is constructor, destructor and how they work*/

#include<iostream>
using namespace std;

//class creat
class className{
public:
    //constructor
    className(string x){
        cout << "Object is created. This constructor worked by " << x << " object"<< endl;
    }

    //destructor
    ~className(){
        cout << "Program runing is complete.This destructor worked." << endl;
    }

    void memberFunction(string z){
        cout << "This member funtion call by " << z << "object" << endl;
    }
};
int main(){
    //simple way with . operator - store in stack
    className objectName("objectName (simpel way)"); // creat object by simple way
    objectName.memberFunction("objectName (simple way) with (.) operator "); //access member function by (.) operator for simple way
    //destructor work automatically for this object because this class object store in stack.

    //simple way but access member function by pointer and this pointer hold the object. this object is stored in stack
    className objectName_2("objectName (simple way) 2 "); //creat object by simple way
    className *objectPtr = &objectName_2;
    objectPtr->memberFunction("objectPtr (simple way with pointer ");


    //pointer way store class in Heap with "new" and "delete" operator - store in heap
    className *objectPtrName = new className("objectPtrName (pointerway) "); //creat object by pointer which store the whole class
    objectPtrName ->memberFunction("objectPtrName (pointer way) with new & delete operator "); //access member function by (->) operator for pointer way
    //destructor not work automatically for this object because this class object store in heap. so if destructor is needed, call manually.
    objectPtrName->~className();

    return 0;
}

