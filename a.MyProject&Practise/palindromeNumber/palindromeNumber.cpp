#include<iostream>
#include<sstream>
using namespace std;

//palindromeNumber is the numbers that can get same number if u write reverse
//Example..
//          131 => 131 ===> yes, it's palindromeNumber
//          126 => 621 ===> no, it's not palindromeNumber   
//Below code solve the problem without math

bool isPalindrome(int x){
    int compareNum;
    string str,tempo;
    string rev = " ";

    stringstream ss1;
    ss1<<x;
    ss1>>str;
    int length = str.length();

    int j = length - 1;
    for(int i = 0; i<length; i++){
        tempo[i] = str[j];
        j--;
    }
    for(int i = 0; i<length; i++){
        rev = rev + tempo[i];
    }

    stringstream ss2;
    ss2<<rev;
    ss2>>compareNum;

    if(compareNum == x){
        return true;
    }else{
        return false;
    }

}

int main(){
    int n;
    cin>>n;

    if(isPalindrome(n)){
        cout<<n << " is palindrome";
    }else{
        cout<<n << " is NOT palindrome";
    }
    
    return 0;
}