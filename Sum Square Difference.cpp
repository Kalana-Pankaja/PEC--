#include <iostream>
using namespace std;
int SquareOfSum=0;
int SumOfSquares=0;
int main() {
    for (int i=1; i <= 100;i++){
        SquareOfSum += i;
        SumOfSquares += i * i;
    }
    SquareOfSum = SquareOfSum * SquareOfSum;
    int result = SquareOfSum - SumOfSquares;
    cout << result << endl;
    return 0;
}