
#include<iostream>
using namespace std;

int main() {
    int N = 15;

    for (int i = 2; i <= N; i++) {
        int curr = i;
        bool isPrime = true;

        for (int j = 2; j*j <= curr; j++) {
            if (curr % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << curr << " ";
        }
    }

    cout << endl;
    return 0;
}
