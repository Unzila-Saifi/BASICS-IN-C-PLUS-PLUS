#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter the size of array: ";
    cin >> n;

    // Input elements
    cout<<"enter an array elements"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display elements
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
  
    return 0;
}

