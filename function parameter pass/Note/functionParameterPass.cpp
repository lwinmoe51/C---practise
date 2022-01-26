/*This program show the different between passByValue and passByReference*/
#include<iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main(){
    int lwinAge = 24;
    int tunAge = 45;

    cout << "Lwin is " << lwinAge << "year old. " << endl;
    cout << "Tun is " << tunAge << "year old." << endl;

    passByValue(lwinAge); //This will not change orgianal value
    passByReference(&tunAge); //This will change by function from orginal value

    cout << "Ages are changed." << endl;

    cout << "Lwin is " << lwinAge << "year old now" << endl;
    cout << "Tun is " << tunAge << "year old now." << endl;

    return 0;
}

void passByValue(int x){
    x = 44;
}

void passByReference(int *x){
    *x = 55;
}
