#include <iostream>

using namespace std;

int printHalf(int row) {
    for (int s1 = 1; s1 < row ; s1++) {
            cout << " ";
        }
        for (int h1 = 1; h1 <= row; h1++) {
            cout << "#";
        }
        for (int s2 = 1; s2 <= 21 - (row * 4); s2++) {
            if (row == 5) {
                cout << "#";
            } else {
                cout << " ";
            }
        }
        for (int h2 = 1; h2 <= row; h2++) {
            cout << "#";
        }
        cout << "\n";
        
        return 0;
}

int main()
{
    // Top Half
    for (int row = 1; row <= 5; row++) {
        printHalf(row);
    }
    // Bottom Half
    for (int row = 5; row >= 1; row--) {
        printHalf(row);
    }
    return 0;
}
