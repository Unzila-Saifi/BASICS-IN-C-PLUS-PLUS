// display array elem
#include<iostream>
using namespace std;

class PrintArray{
	int arr[5];          
	public:
	void getArray(){
		 int *ptr = arr;
		cout << "Enter 5 elements:" << endl;
        for (int i = 0; i < 5; i++) {
        cin >> *(ptr + i);  // reading elements
         }
    	    }
	void printArray(){
		cout << "The elements are:" << endl;
        for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "<<endl;  // display array  elements
        }
	}
	void Last(){
	cout << "display array elements:" << endl;
    for (int *ptr2 = arr; ptr2 < arr + 5; ptr2++) {
        cout << *ptr2 << " "; 
    }
	    }
};

int main(){
	PrintArray display;
	display.getArray();
	display.printArray();
	display.Last();
}
