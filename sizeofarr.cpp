#include<iostream>
using namespace std;
    void printArr(int nums[]) {
        cout<<sizeof(nums)<<endl;
    }
    int main () {
        int arr [] = {1,2,3,4,5};
        int n = sizeof(arr)/sizeof(int);
        cout<<"array size = "<<sizeof(arr)<<endl;
        printArr(arr);
        return 0;

    }
    