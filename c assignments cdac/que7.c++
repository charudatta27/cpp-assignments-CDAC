#include <iostream>
#include <iomanip>
using namespace std;

// Global constant
const float PI = 3.14159f;

// Function prototypes
float circleArea(float radius);
float circlePerimeter(float radius);

int main() {

    float radius = 7.0f;

    float area = circleArea(radius);
    float perimeter = circlePerimeter(radius);

    cout << fixed << setprecision(4);

    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    PI = 3.0f; // ❌ Error: assignment of read-only variable 'PI'
               // (You cannot modify a const variable)

    return 0;
}

// Function definitions

float circleArea(float radius) {
    return PI * radius * radius;
}

float circlePerimeter(float radius) {
    return 2 * PI * radius;
}



// error: assignment of read-only variable 'PI'
//      PI = 3.0f; // â?O Error: assignment of read-only variable 'PI'