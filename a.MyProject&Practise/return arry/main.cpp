#include<iostream>
using namespace std; 
int array1[5] = {1,2,3,4,5};
int array2[5];

array reverse(int *ptr){
    int arrayValue[5];
    arrayValue[0] = ptr[4];
    arrayValue[1] = ptr[3];
    arrayValue[2] = ptr[2];
    arrayValue[3] = ptr[1];
    arrayValue[4] = ptr[0];
    return arrayValue;
}
int main(){
    array2 = reverse(&array1);
    cout<<array2;


}