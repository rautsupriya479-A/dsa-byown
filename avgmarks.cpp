#include<iostream>
using namespace std;
int main (){
    int eng;
    int sci;
    int math;
    cout<<"enter english marks:";
    cin>>eng;
    cout<<"enter science math:";
    cin>>sci;
    cout<<"enter math marks:";
    cin>>math;
    int avg = (eng+sci+math)/3;
    cout<<"avg maarks="<<avg<<endl;
    return 0 ;
}