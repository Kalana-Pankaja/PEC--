#include <iostream>
using namespace std;

long long largestPrimeFactor(long long n) {
    long long largestPrime = -1;

    while (n % 2 == 0) {
        largestPrime = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0)  {
            largestPrime = i;
            n /= i;
        }
    }

    if (n > 2) {
        largestPrime = n;
    }

    return largestPrime;
}

int main() {
    long long n = 600851475143;
    long long res = largestPrimeFactor(n);
    cout << res << endl;

    return 0;
}
