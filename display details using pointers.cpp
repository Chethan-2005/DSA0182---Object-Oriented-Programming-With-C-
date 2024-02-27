#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student(const string& n, int a) : name(n), age(a) {}
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    string studentName;
    int studentAge;
    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter student age: ";
    cin >> studentAge;
    Student student1(studentName, studentAge);
    Student* ptrStudent = &student1;
    cout << "Using Pointer to Object:" << endl;
    ptrStudent->display();
    cout << "\nDirect Access:" << endl;
    student1.display();
    return 0;
}

