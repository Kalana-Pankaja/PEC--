#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str))
        cout << "It's a palindrome!" << endl;
    else
        cout << "Not a palindrome." << endl;

    return 0;
}
