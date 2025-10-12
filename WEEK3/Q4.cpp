//incree decreee
#include<iostream>
using namespace std;

class IncreDecre{
	int num;
	public:
	void getNum(){
	cout<<"Enter a Number:"<<endl;
	cin>>num;	
	}	
	void takingNum(){
	int *ptr= &num;
	num++;
	cout<<"Increment a number:"<<*ptr<<endl;
	num--;
	cout<<"decrement a number:"<<*ptr;
	}	
};

int main(){
	IncreDecre Numbers;
	Numbers.getNum();
	Numbers.takingNum();
}
	

