#include<iostream>
using namespace std;
int main(){
	int sum=0 ,number;
	int num;
		
	    for(number=100; number<999; number++){
	    	sum=0;
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
    } 
	
	}
}


