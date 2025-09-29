#include<iostream>
using namespace std;
int main(){
	int FirstNumber ,SecondNumber;
	
	cout<<"Enter FirstNumber"<<endl;
	cin>>FirstNumber;
	cout<<"Enter SecondNumber"<<endl;
	cin>>SecondNumber;
	 while ( SecondNumber!= 0) {
        // Calculate carry
        int carry = FirstNumber & SecondNumber;

        // Sum without carry
        FirstNumber =  FirstNumber^ SecondNumber;

        // Shift carry to the left
        SecondNumber = carry << 1;
    }
    cout<<"Sum of Two Numbers are: "<<FirstNumber;
}
