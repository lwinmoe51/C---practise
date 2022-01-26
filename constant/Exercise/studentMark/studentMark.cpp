#include<iostream>
#include <.h>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        const int serialNumber;
        int myanmar,english,mathematics;

    public:
        Student(string n,const int sNum,int myan, int eng, int math)
        :name(n),serialNumber(sNum),myanmar(myan),english(eng),mathematics(math)
        {
            //constructor
        }
        void displayStudentInfo{
            cout<<"Student Name : "<<name<<endl;
            cout<<"Serial Number : "<<serialNumber<<endl;
            cout<<"Myanmar Mark : "<<myanmar<<endl;
            cout<<"English Mark : "<<english<<endl;
            cout<<"Mathematics Mark : "<<mathematics<<endl;
        }
}

int main(){

}