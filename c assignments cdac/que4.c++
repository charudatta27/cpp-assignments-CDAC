#include <iostream>
using namespace std;

// Function prototype
void findMinMax(int a, int b, int c, int &minVal, int &maxVal);

int main() {

    int x = 10, y = 25, z = 5;

    int lo, hi;  // these will store min and max

    findMinMax(x, y, z, lo, hi);

    cout << "Minimum: " << lo << endl;
    cout << "Maximum: " << hi << endl;

    return 0;
}

// Function definition
void findMinMax(int a, int b, int c, int &minVal, int &maxVal) {

    minVal = a;   // assume a is smallest
    maxVal = a;   // assume a is largest

    if (b < minVal)
        minVal = b;

    if (b > maxVal)
        maxVal = b;

    if (c < minVal)
        minVal = c;

    if (c > maxVal)
        maxVal = c;
}