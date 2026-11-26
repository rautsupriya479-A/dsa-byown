#include<iostream>
#include<string>
using namespace std;

int getVowelCount(string str) {
    int vowelCount = 0;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'a' || str[i] == 'e' || 
           str[i] == 'i' || str[i] == 'o' || 
           str[i] == 'u') {

            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    string str = "hello world";

    cout << getVowelCount(str) << endl;

    return 0;
}