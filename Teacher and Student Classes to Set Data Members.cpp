#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string nm;
    int ag;
    char gen;
public:
    Person(const string& n, int a, char g) : nm(n), ag(a), gen(g) {}
    string getN() const { return nm; }
    int getAge() const { return ag; }
    char getGen() const { return gen; }
    void setN(const string& n) { nm = n; }
    void setAge(int a) { ag = a; }
    void setGen(char g) { gen = g; }
};
class Student : public Person {
private:
    int rn;
    string cls;
public:
    Student(const string& n, int a, char g, int r, const string& c)
        : Person(n, a, g), rn(r), cls(c) {}
    int getR() const { return rn; }
    string getC() const { return cls; }
    void setR(int r) { rn = r; }
    void setC(const string& c) { cls = c; }
};
class Teacher : public Person {
private:
    string subj;
    int sal;
public:
    Teacher(const string& n, int a, char g, const string& s, int sl)
        : Person(n, a, g), subj(s), sal(sl) {}
    string getSub() const { return subj; }
    int getSal() const { return sal; }
    void setSub(const string& s) { subj = s; }
    void setSal(int s) { sal = s; }
};
int main() {
    Student stu("John", 18, 'M', 101, "12th");
    Teacher tch("Mrs. Smith", 35, 'F', "Math", 50000);
    cout << "Student Details:" << endl;
    cout << "Name: " << stu.getN() << endl;
    cout << "Age: " << stu.getAge() << endl;
    cout << "Gender: " << stu.getGen() << endl;
    cout << "Roll No: " << stu.getR() << endl;
    cout << "Class: " << stu.getC() << endl << endl;

    cout << "Teacher Details:" << endl;
    cout << "Name: " << tch.getN() << endl;
    cout << "Age: " << tch.getAge() << endl;
    cout << "Gender: " << tch.getGen() << endl;
    cout << "Subject: " << tch.getSub() << endl;
    cout << "Salary: " << tch.getSal() << endl;
    return 0;
}

