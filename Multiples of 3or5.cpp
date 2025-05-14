#include <iostream>
using namespace std;

int sum = 0;

int main() {
    for (int i = 1; i < 1000; i++) { 
        if (i % 5 == 0 || i % 3 == 0) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
