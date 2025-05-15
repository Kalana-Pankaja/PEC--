#include <iostream>
#include <cmath>
using namespace std;
int d(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    int sum=0;
    for (int i=1; i<10000; i++){
        int a=d(i);
        int b=d(a);
        if (b==i && a!=b){
            sum+=a;
        }
    }
    cout<<sum<<endl;
    return 0;
}