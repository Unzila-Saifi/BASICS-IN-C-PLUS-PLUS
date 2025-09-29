#include <iostream>
#include <cmath>    // For sqrt() function

using namespace std;

int main() {
    double a, b, c;
    double root1, root2;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
        return 1;
    }
    double discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } 
    else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2*a);
        cout << "Roots are real and same." << endl;
        cout << "Root = " << root1 << endl;
    } 
    else {
        // Complex roots
        cout << "Roots are complex. Cannot be determined using real numbers." << endl;
    }

    return 0;
}
