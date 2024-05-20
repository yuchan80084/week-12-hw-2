#include<iostream>
using namespace std;
class Person {
    // Data members of person 
public:
    Person(int x) { 
        name = "kim";
        cout << "Person: " << name << endl;
    }//constructor
    string name;
};

class Faculty : public Person {
    // data members of Faculty
public:
    Faculty(int x) :Person(x) 
    {
        F = "Electronic Engineering";
        cout << "Faculty: " << F << endl;
    }
    string F;
};

class Student : public Person {
    // data members of Student
public:
    Student(int x) :Person(x) {
        grade = "Senior";
        cout << "Student: " << grade << endl;
    }
    string grade;
};

class TA : public Faculty, public Student {
public:
    TA(int x) :Student(x), Faculty(x) 
    {
        age = x;
        cout << "TA: " << age << endl;
    }
    int age;
};

int main() {
    TA ta1(30);
}