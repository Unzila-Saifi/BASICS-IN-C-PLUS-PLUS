//add two no.
#include<iostream>
using namespace std;

class sum{
	int firstNum;
	int SecondNum;
	public:
	void getnum(){
		cout<<"Enter a First Number:"<<endl;
		cin>>firstNum;
		cout<<"Enter a second Number:"<<endl;
		cin>>SecondNum;
	}
	void putnum(){
		int *ptr1=&firstNum;
		int *ptr2=&SecondNum;
		cout<<"Sum of Two Numbers:"<<(*ptr1+*ptr2);
	}
};

int main(){
	sum firstNumSecondNum;
	firstNumSecondNum.getnum();
	firstNumSecondNum.putnum();
}
