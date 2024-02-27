#include <iostream>
using namespace std;
int celTofah(int cel) {
    return (cel * 9 / 5) + 32;
}
int fahTocel(int fah) {
    return (fah - 32) * 5 / 9;
}
int main() {
    int cel, fah;
    cout << "Enter temperature in Celsius: ";
    cin >> cel;
    fah = celTofah(cel);
    cout << "Equivalent temperature in Fahrenheit: " << fah << endl;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fah;
    cel = fahTocel(fah);
    cout << "Equivalent temperature in Celsius: " << cel << endl;
    return 0;
}

