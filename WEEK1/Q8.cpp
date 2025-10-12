#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a 3-digits number: ";
    cin >> number;
    // Check if the number is a 3-digit number
    if (number < 100 || number > 999) {
        cout << "Please enter a valid 3-digit number." << endl;
        return 1;
    }

    // Calculate the sum of the cubes of its digits
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10; // Get the last digit
        sum += digit * digit * digit; // Cube the digit and add to sum
        temp /= 10; // Remove the last digit
    }

    // Check if the sum is equal to the original number
    if (sum == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}

