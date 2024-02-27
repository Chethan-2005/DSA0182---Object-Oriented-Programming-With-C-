#include <iostream>
using namespace std;
class S {
public:
    int FMP(int num[], int n) {
        for (int i = 0; i < n; ++i) {
            while (num[i] > 0 && num[i] <= n && num[num[i] - 1] != num[i]) {
                swap(num[i], num[num[i] - 1]);
            }
        }
        for (int i = 0; i < n; ++i) {
            if (num[i] != i + 1) {
                return i + 1;
            }
        }
        
        return n + 1;
    }
};
int main() {
    S sol;
    int num1[] = {1, 2, 0};
    int s1 = sizeof(num1) / sizeof(num1[0]);
    cout << "First missing positive: " << sol.FMP(num1, s1) << endl;
    int num2[] = {3, 4, -1, 1};
    int s2 = sizeof(num2) / sizeof(num2[0]);
    cout << "First missing positive: " << sol.FMP(num2, s2) << endl;
    int num3[] = {7, 8, 9, 11, 12};
    int s3 = sizeof(num3) / sizeof(num3[0]);
    cout << "First missing positive: " << sol.FMP(num3, s3) << endl;
    return 0;
}
