#include<iostream>
//#include<string>
using namespace std;

int main(){
    cout<<"Enter any string for string type variable with space = ";
    //getline(cin,string_tye_variable_name) => is for string type input
    string s;
    getline(cin,s);
    cout<<"Your string for string type var = "<< s<<endl;

    cout<<"Enter any string for char type variable with space = ";
    //cin.getline(char_tpye_variable_name,sizeof(var));
    char ch[100];
    cin.getline(ch,sizeof(ch));
    cout<<"Your string for char type var = "<< ch<<endl;

}