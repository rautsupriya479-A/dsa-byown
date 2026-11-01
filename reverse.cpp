#include<iostream>
using namespace std;
int main () {
    int n = 10829;
    while(n>0) {
        int lastdigit = n%10;
        cout<<lastdigit;
        n/=10;
    }
    cout<<endl;
    return 0;
}