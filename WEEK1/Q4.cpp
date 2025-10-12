#include<iostream>
using namespace std;
int main(){
	int Number , i;
	long first = 0, second = 1 , next;
	cout << "Enter the number of terms to generate in the Fibonacci sequence: ";
    cin >> Number;
     cout << "Fibonacci Sequence: ";
    for (i = 0; i < Number; i++) {
        if (i == 0) {
            cout << first << " ";
        } else if (i == 1) {
            cout << second << " ";
        } else {
            next = first + second;
            first = second;
            second = next;
             cout << next << " ";
        }
    }
    return 0;
}

