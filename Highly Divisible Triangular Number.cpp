#include <iostream>
#include <cmath>
using namespace std;
int numOfDevisors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count += 2; 
        }
        if (i * i == n) {
            count--; 
        }
    }
    return count;
}
int TriangularNumber(int n) {
    return (n * (n + 1)) / 2;
}
int main() {
    for (int i = 1; ; i++) {
        int triangularNumber = TriangularNumber(i);
        if (numOfDevisors(triangularNumber) > 500) {
            cout << triangularNumber << endl;
            break;
        }
    }
}