#include <iostream>
using namespace std;

int main() {
    int num;
    char ch;  
    cout << "Enter a number = ";
    cin >> num;

    if (cin.fail()) {
        cout << "Invalid input! Please enter a number.\n";
    } else {
        (num % 2 == 0) ? cout << "Number is even\n" : cout << "Number is odd\n";
    }

    return 0;
}

