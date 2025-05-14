#include <iostream>
using namespace std;
int main() {
    int count = 0;
    int num = 1;
    while (count < 10001) {
        num++;
        bool isPrime = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            count++;
        }
    }
    cout << num << endl;
    return 0;
}