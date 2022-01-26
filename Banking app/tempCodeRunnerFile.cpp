#include<iostream>
#include<fstream>

using namespace std;

string readallFile();

int main(){
    ofstream writeFile("test.txt");
    writeFile<<"1" << " " << "Lwin" << " " << "1000\n";
    writeFile<<"2"<< " " << "Moe" << " " << "2000\n";
    writeFile.close();

    ifstream readFile("test.txt");
    string var[];
    
    readFile>>var1;
    readFile>>var2;

    cout<<var1 << " " <<var2;
    return 0;
}