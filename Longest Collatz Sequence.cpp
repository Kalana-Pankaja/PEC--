#include <iostream>
#include <cmath>
using namespace std;
int collatz(int n) {
    int count = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}
int main() {
    int maxLength = 0;
    int number = 0;
    for (int i = 1; i < 1000000; i++) {
        int length = collatz(i);
        cout<<i<<","<<length<<endl;
        if (length > maxLength) {
            maxLength = length;
            number = i;
        }
    }
    cout << number << endl;
    return 0;
}