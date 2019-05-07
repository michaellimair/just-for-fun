#include <iostream>

using namespace std;

long long fac(int n) {
    if (n==1) return 1;
    return n * fac(n-1);
}

int main() {
    int num;
    do {
        cout << "Input the value of n: ";
        cin >> num;
    } while (num <= 0);

    cout << "The result is: " << fac(num) << endl;
    return 0;
}
