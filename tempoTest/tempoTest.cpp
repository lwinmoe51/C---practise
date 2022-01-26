#include <iostream>
#include <string.h>
using namespace std;

char checkerArr[3] = {'O','O','O'};

int main()
{
    if('O' == checkerArr[0] && 'O' == checkerArr[1] && 'O' == checkerArr[2]){
        cout<<"yes";
    }else{
        cout<<"No";
    }
}
