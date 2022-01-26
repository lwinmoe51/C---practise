/* This program will show how to return multiple value from a function in C/C++
There are three way to return multiple value from function =>
1. By using pointers
2. By using structures.
3. By using Arrays.
 */
#include <iostream>
using namespace std;

//By using pointers 
//This function will campare two
void compare(int a, int b, int* add_great, int* add_small){
    if(a>b){
        *add_great = a;
        *add_small = b;
    }else{
        *add_great = b;
        *add_small = a;
    }
}
int main(){
    int great,small,x,y;
    cout << "Enter two numbers"<<endl;
    cin >> x;
    cin>>y;
    compare(x, y, &great, &small);
    cout << "Greater number is " << great <<endl;
    cout << "Small number is " << small << endl;
    cout << "Program end";
    return 0;
}