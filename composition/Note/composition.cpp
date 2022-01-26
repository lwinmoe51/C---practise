#include<iostream>
#include<string>
using namespace std;
class Birthday{
    private:
        int day,month,year;
    public:
        Birthday(int dd, int mm, int yy):day(dd),month(mm),year(yy)
        {
            //do something;
        }
        void printDate(){
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }

};

class Person{
    private: 
        string name;
        Birthday bd;
    public:
        Person(string n, Birthday b)
        :name(n),
        bd(b)
        {
            //do something;
        }
        void printInfo(){
            cout<<"name = "<<name<<endl;
            bd.printDate();
        }
};

int main(){
    Birthday bdObj(8,3,1997);
    Person p("Lwin Moe", bdObj);
    p.printInfo();
}