//Write a program to create a template for classes and implement students' data with name, age, course and department.
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Student {
private:
    string name;
    int age;
    T course;
    T department;

public:
    Student(string n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<string> student1("John Doe", 20, "Computer Science", "Engineering");
    cout << "Student 1 Details:" << endl;
    student1.display();
    
    cout << endl;

    Student<string> student2("Jane Smith", 22, "Mathematics", "Science");
    cout << "Student 2 Details:" << endl;
    student2.display();
    
    return 0;
}
