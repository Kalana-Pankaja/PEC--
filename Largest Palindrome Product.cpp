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
    int max=0;
    for(int i=100;i<1000;i++){
        for(int j=100;j<1000;j++){
            int c=i*j;
            string str = to_string(c);
            if(isPalindrome(str)==true){
                if(c>max){
                    max=c;
                }
            }
        }
    }
    cout<<max;
    return 0;
}
