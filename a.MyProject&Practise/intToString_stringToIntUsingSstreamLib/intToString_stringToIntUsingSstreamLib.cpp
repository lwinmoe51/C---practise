#include<iostream>
#include<sstream>
using namespace std;

//using sstream library method 

int main(){
    int num = 123;
    string str;
    stringstream ss;
    ss<<num;
    ss>>str;
    //cout<<str<<endl;
    cout<<str[0];
    cout<<str[1];
    cout<<str[2]<<endl;


    string str1 = "13";
    int num2;
    stringstream ss2;
    //int intArray[(sizeof(str1) / sizeof(str1[0]))+1];
    //for(int i = 0; i<str1.length(); i++){
    //    ss2<<str1[i];
    //    ss2>>intArray[i];
    //}
    //cout<<intArray[0];
    //cout<<intArray[1];

    ss2<<str1;
    ss2>>num2;
    cout<<num2;

    return 0;
}