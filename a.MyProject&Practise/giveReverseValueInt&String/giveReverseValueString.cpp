#include<iostream>
//#include<string>
using namespace std;

int main(){
    string ch;
    string rev = " ";
    string tempo;
    int length;
    
    cout<<"Enter string = ";
    getline(cin,ch);

    length = ch.length();
    cout<<length<<endl;

    //rev[length] = '\0';
    int j = length - 1;
    for(int i = 0; i<length; i++){
        tempo[i] = ch[j];
        j--;
    }
    for(int i = 0; i<length; i++){
        rev = rev + tempo[i];
    }
    cout<<"Your reverse string = " << rev<<endl;
    
    
    
}


