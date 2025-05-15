#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    for(a = 1; a < 1000; a++) {
        for(b = 1; b < 1000; b++){
            if ((sqrt(a*a+b*b))%1==0){
                c = sqrt(a*a+b*b);
                if(a+b+c==1000){
                    cout<<a<<","<<b<<","<<"c"<<endl
                }
            } 
            
        }
    }
}