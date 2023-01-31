#include<iostream>
#include<string.h>
using namespace std;
class Student{
    private:
    string studentName;
    int studentRollno;
    int studentAge;

    public:
    string getStudentName(){
        return studentName;
    }
    void setStudentName(string name){
        studentName = name;
    }
    int getStudentroll(){
        return studentAge;
    }
    void setStudentage(int age){
        studentAge = age;
    }
    int getStudentage(){
        return studentRollno;
    }
    void setStudentRoll(int roll){
        studentRollno = roll;
    }
};
int main(){
    Student obj;
    obj.setStudentName("Rahul");
    obj.setStudentRoll(21);
    obj.setStudentage(22);

    cout<<"[ Name : "<<obj.getStudentName();
    cout<<",Rollno : "<<obj.getStudentroll();
    cout<<",Age : "<<obj.getStudentage()<<" ]"<<endl;

}