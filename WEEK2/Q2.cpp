#include <iostream>
using namespace std;

int main() {
	int arr[20];
	int n ,i , sum=0;
	cout<<"enter size of array:";
	cin>>n;  // Read the size of the array
    
    cout<<"enter an array elements:"<<endl;
    for(i=0; i<n; i++){
    	cin>>arr[i];         // Read each element into the array
   sum+=arr[i]; // Add the element to sum
	}

	cout<<"sum of all arrays are:"<<sum;
}
