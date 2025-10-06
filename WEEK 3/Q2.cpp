// swap no.
#include<iostream>
using namespace std;

class SwapNumbers{
	int firstNumber;
	int secondNumber;
	public:
	void getNum(){
	cout<<"Enter first Number:"<<endl;
	cin>>firstNumber;
	cout<<"Enter second Number:"<<endl;
	cin>>secondNumber;
	}
	void putit(){
	int *ptr1=&firstNumber;
	int *ptr2=&secondNumber;
	
	int temp;
   	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
	cout<<"After Swapping the numbers:"<<endl;
    cout<<"first no. are:"<<*ptr1<<" "<<endl;
    cout<<"second no. are:"<<*ptr2<<" ";	
	}	
};
int main(){
	SwapNumbers TwoNumbers;
	TwoNumbers.getNum();
	TwoNumbers.putit();
}
	
