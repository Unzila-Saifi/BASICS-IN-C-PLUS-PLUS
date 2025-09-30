#include<iostream>
using namespace std;
int main(){
	        int i;
	        int arr[]= {2,4,5,6,7};
	        int n=sizeof(arr)/sizeof(arr[0]);
	 	    int largest=0;
	 		int secondlargest=0;
	 for(i=0;i<n;i++){
	 	if (arr[i] > largest) {
            secondlargest = largest;
                largest = arr[i];
        } 
	else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }

	}
	 cout << "Second largest number is: " << secondlargest << endl;
}
