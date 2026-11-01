#include<iostream>
using namespace std;
int main () {
    int n = 10829;
    int dig sum = 0;
    while (n>0) {
        int last_digit = n%10;
        if(last_digit%2!=0) {
            dig sum += last_digit;
        }
        n=n/10;
    }
    cout<<dig_sum<<endl;
    return 0;
}