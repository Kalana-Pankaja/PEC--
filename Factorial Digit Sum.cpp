#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n=10;
    long long number=factorial(n);
    cout<<number<<endl;
}
