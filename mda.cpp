#include<iostream>
using namespace std;
int *function() {
    int*ptr = new int ;
    *ptr = 1200;
    cout<<"ptr points to"<<*ptr<<endl;
    return ptr ;
}
int main () {
    int *x = function();
    cout<<*x<<endl;
    return 0;
}