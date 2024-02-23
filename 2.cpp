#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num,ori = num,sum = 0,n = 0;;
    cout << "Enter a number: ";
    cin >> num;
     while (num != 0) {
        num /= 10;
        n++;
    }
    num = ori;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }
    if (sum == ori) {
        cout<< " It is a Narcissistic number." << endl;
    } else {
        cout<< " It is not a Narcissistic number." << endl;
    }

    return 0;
}

