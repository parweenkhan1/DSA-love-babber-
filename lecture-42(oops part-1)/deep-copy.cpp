#include <iostream>
#include <string.h>
using namespace std;

class Student
{

public:
    int id;
    int age;
    char name[10];

public:
    void set_id(int id)
    {
        this->id = id;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    void set_name(char name[])
    {
        strcpy(this->name, name);
    }
    Student(){

    }
    Student(Student &temp)
    {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        strcpy(this->name,ch);

        cout << "Copy constructor called" << endl;
        this->id = temp.id;
        this->age = temp.age;
    }
    void print()
    {
        cout << endl;
        cout << "[Name : " << this->name << ",";
        cout << " id : " << this->id << ",";
        cout << " age : " << this->age << "]";
        cout << endl
             << endl;
    }
};

int main()
{
    Student s1;
    s1.set_id(21);
    s1.set_age(22);
    char name[10] = "Babbar";
    s1.set_name(name);
    s1.print();

    // creating copy constructor(deep copy)
    Student s2(s1); // or Student s2 = s1;
    s2.print();

    s1.name[0] = 'G';
    s1.print();

    s2.print();

    return 0;
}