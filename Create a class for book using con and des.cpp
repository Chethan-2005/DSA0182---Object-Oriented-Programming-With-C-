#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string tit;
    string aut;
public:
    Book(const string& t, const string& a) : tit(t), aut(a) {
        cout << "Book \"" << tit << "\" by " << aut << " created." << endl;
    }
    Book() {
        cout << "Book \"" << tit << "\" by " << aut << " destroyed." << endl;
    }
};
int main() {
    Book Book1("Harry Potter and the Philosopher's Stone", "J. K. Rowling");
    return 0;
}

