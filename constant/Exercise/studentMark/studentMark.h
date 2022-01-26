#ifndef StudentMark_H
#define STUDENTMARK_H

class Student{
    private:
        string name;
        const int serialNumber;
        int myanmar,english,mathematics;

    public:
        Student(string n,const int sNum,int myan, int eng, int math);
        void displayStudentInfo();
}
#endif //STUDENTMARK_H