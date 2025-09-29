#include<iostream>
using namespace std;
int main(){
	
	int n ,num;
	cout << "Enter a number of  n :"<<endl;
    cin >> n;

    cout << "Prime numbers between 1 and " << n << " are: ";
    for ( num = 2; num <= n; num++) {
        bool isPrime = true; // Assume num is prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false; // Found a divisor, not prime
                break; // No need to check further
            }
        }
        if (isPrime) {
            cout << num << " "; // Print the prime number
        }
    }
    cout << endl;

    return 0;
}

