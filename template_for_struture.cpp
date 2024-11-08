//Write a program to create a template for structures and implement students' data with name, age, course and department.
#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Student {
    string name;
    int age;
    T course;
    T department;
};

int main() {
    Student<string> student1 = {"John Doe", 20, "Computer Science", "Engineering"};
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Course: " << student1.course << endl;
    cout << "Department: " << student1.department << endl;
    
    cout << endl;

    Student<string> student2 = {"Jane Smith", 22, "Mathematics", "Science"};
    cout << "Name: " << student2.name << endl;
    cout << "Age: " << student2.age << endl;
    cout << "Course: " << student2.course << endl;
    cout << "Department: " << student2.department << endl;
    
    return 0;
}
