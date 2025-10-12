#include <iostream>
using namespace std;

int main() {
    int n, FrequencyNumber, CountFrequency=0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

//     Input the number to find the frequency of
    cout << "Enter the number to find frequency: ";
    cin >> FrequencyNumber;

//    Count how many times the FrequencyNumber  appears
    cout << "Frequency of " << FrequencyNumber << " is: " <<endl;
    for (int i = 0; i < n; i++) {
        if (arr[i] == FrequencyNumber ){
            CountFrequency++;
        }
    }
    cout<<CountFrequency<<" ";
    return 0;
}

