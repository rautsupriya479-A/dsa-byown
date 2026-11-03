#include<iostream>
using namespace std;
int main () {
    int n = 2;
    bool is_prime = true;
    for(int i = 2; i <=n-1;i++) {
        if(n%i==0) {
            is_prime = false;
            break;
        }
    }
    if(is_prime) {
        cout<<"prime"<<endl;
    } else {
        cout<<"not prime"<<endl;
    }
    return 0;
}