//print address
#include<iostream>
using namespace std;

class printAdress{
	int  Var;
	public:
	void getNumber(){
	cout<<"Enter A Number :"<<endl;
	cin>>Var;
	}
	void takingNum(){
		int *ptr= &Var;
	
	cout<<"Address of "<<*ptr<<" are:"<<&Var<<endl;
	}
};

int main(){
	printAdress Num;
	Num.getNumber();
	Num.takingNum();
}
