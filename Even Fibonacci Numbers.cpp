
#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c;
    int sum = 2;  

    while (true) {
        c = a + b;
        if (c > 4000000) {
            break;
        }

        if (c % 2 == 0) {
            cout << c << "\n";
            sum += c;
        }

        a = b;
        b = c;
    }

    cout << sum << "**"; 
    return 0;
}
