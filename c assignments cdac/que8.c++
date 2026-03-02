#include <iostream>
using namespace std;

// Function prototypes
int absolute(int n);
int clamp(int val, int lo, int hi);

int main() {

    cout << "val\tlo\thi\tabsolute(val)\tclamp(val,lo,hi)" << endl;

    int values[] = {-15, 0, 25, -3};
    int los[]    = {-10, -10, -10, 0};
    int his[]    = {10, 10, 10, 5};

    for(int i = 0; i < 4; i++) {
        cout << values[i] << "\t"
             << los[i] << "\t"
             << his[i] << "\t"
             << absolute(values[i]) << "\t\t"
             << clamp(values[i], los[i], his[i]) << endl;
    }

    return 0;
}

// Function definitions (ONLY ternary used)

int absolute(int n) {
    return (n < 0) ? -n : n;
}

int clamp(int val, int lo, int hi) {
    return (val < lo) ? lo : (val > hi) ? hi : val;
}