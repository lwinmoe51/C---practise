#include<iostream>
#include<fstream>

using namespace std;

int creatAcc();
int loginAcc();


int main(){
    ofstream writeFile("banking data.txt");
    writeFile.close();

    cout<<"        ****WELCOME FROM LWIN BANKING****"<<endl;
    cout<<"                 **Main Menu**           "<<endl;  
    cout<<"1-Creat an account"<<endl;
    cout<<"2-Login an account"<<endl;
    cout<<"3-quite program"<<endl;

    int programNum;
    cin>>programNum;
    if(programNum == 1){
        creatAcc();
    }else if(programNum == 2){
        loginAcc();
    }else if(programNum == 3){
        cout<<"bye bye";
    }

return 0;
}

int creatAcc(){
    cout<<"**************************"<<endl;
    cout<<"Accout creation page"<<endl;

    cout<<"Enter your account number = ";
    int accNum;
    cin>>accNum;

    cout<<"Enter your name = ";
    string name;
    cin>>name;

    cout<<"Enter your money amount u want to save = ";
    int money;
    cin>>money;

    ifstream readFile("banking data.txt");
    //readFile>>accNums

    //writeFile<<accNum<< " " <<name<<" "<<money;
    
}

int loginAcc(){
    
}