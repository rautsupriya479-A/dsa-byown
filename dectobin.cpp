#include<iostream>
using namespace std;

void dectoBin(int decNum) {
    int n = decNum;
    int binNum = 0;
    int pow = 1;

    while(n > 0) {
        int rem = n % 2;
        binNum += rem * pow;
        pow = pow * 10;
        n = n / 2;
    }

    cout << binNum << endl;
}

int main() {
    dectoBin(4);
    return 0;
}
