#include<iostream>
using namespace std;
    void multiplyby2(int *a, int *b, int*c) {
        *a = *a * 2;
        *b = *b * 2;
        *c = *c * 2;
    }
    int main () {
    int x = 5 , y = 10 , z = 2;
    multiplyby2(&x, &y, &z);
    cout<<x<<" "<<y<< " "<<z<<" "<<"\n";
    return 0;
    }
