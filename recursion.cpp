#include <iostream>

using namespace std;

int factorial(int n) {
    return n > 1 ? n * factorial(n-1) : 1;
}

int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}
