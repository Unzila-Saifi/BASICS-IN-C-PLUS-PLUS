 #include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length;
    // Calculate length of array
  length = sizeof(arr) / sizeof(arr[0]);// size of entire array divided by size of one element[4bytes]
    cout << "Length of the array = " << length << endl;

    return 0;
}
