#include <iostream>
using namespace std;

int main() {

    int max(int a, int b);
    int greaterValue;

    cout << max(1, 2) << '\n';
    cout << max(2938775, 339293)<< '\n';
    cout << max(1234, 999)<< '\n';

    return 0;
}

// Function takes two values and returns the greater of the two.
int max(int a, int b) {
    return a > b ? a : b;
}