#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int squareEveryDigit(int num);

int main(){
    squareEveryDigit(123);
    return 0;

}

int squareEveryDigit(int num){
    string str;
    stringstream ss;
    ss<<num;
    ss>>str;
    cout<<str<<endl;
    cout<<"string length : "<<str.length()<<endl;

    cout<<"str[0] :"<< str[0]<<endl;
    cout<<"str[1] :"<< str[1]<<endl;
    cout<<"str[2] :"<< str[2]<<endl;
    
    stringstream toOneDigit;
    int int1,int2,int3;
    toOneDigit<<str[0];
    toOneDigit>>int1;
    toOneDigit<<str[1];
    toOneDigit>>int2;
    toOneDigit<<str[2];
    toOneDigit>>int3;

    cout<<"int1 :"<<int1;
    cout<<"int2 :"<<int2;
    cout<<"int3 :"<<int3;

}