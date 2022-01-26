#include<iostream>
//#include<string>
using namespace std;

int main(){
    char ch [100];
    char rev[100];
    int length = 0;
    
    cout<<"Enter string = ";
    cin.getline(ch,sizeof(ch));

    while(ch[length] != '\0'){
        length++;
    }
    cout<<length<<endl;
    rev[length] = '\0';
    int j = length - 1;
    for(int i = 0; i<length; i++){
        rev[i] = ch[j];
        j--;
    }
    cout<<"Your reverse string = "<<rev<<endl;
}


