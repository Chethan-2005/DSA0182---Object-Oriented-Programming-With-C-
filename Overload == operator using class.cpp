#include <iostream>
using namespace std;
class C {
private:
    int val;
public:
    C(int v) : val(v) {}
    int operator==(const C& other) const {
        return val == other.val;
    }
};
int main() {
    int v1, v2, v3;
    cout << "Enter value for obj1: ";
    cin >> v1;
    C obj1(v1);
    cout << "Enter value for obj2: ";
    cin >> v2;
    C obj2(v2);
    cout << "Enter value for obj3: ";
    cin >> v3;
    C obj3(v3);
    if (obj1 == obj2) {
        cout << "obj1 and obj2 are equal." << endl;
    } else {
        cout << "obj1 and obj2 are not equal." << endl;
    }
    if (obj1 == obj3) {
        cout << "obj1 and obj3 are equal." << endl;
    } else {
        cout << "obj1 and obj3 are not equal." << endl;
    }
    if (obj2 == obj3) {
        cout << "obj2 and obj3 are equal." << endl;
    } else {
        cout << "obj2 and obj3 are not equal." << endl;
    }
    return 0;
}

