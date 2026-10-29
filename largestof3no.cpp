#include<iostream>
using namespace std;
int main () {
    int a,b,c;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    cout<<"enter c:"<<endl;
    cin>>c;
    if(a>=b && a>=c){
        cout<<" largest is a ="<<a<<endl;
    }
    else if(b>=c){
        cout<<"largest is b ="<<b<<endl;
    }
    else {
        cout<<"largest is c ="<<c<<endl;
    }
    return 0;
}