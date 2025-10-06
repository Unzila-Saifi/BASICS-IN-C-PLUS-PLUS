//print string
#include<iostream>
#include<string>
using namespace std;

class PrintStr{
	string str;
	public:
	void getstr(){
	cout<<"Enter a string:"<<endl;
	cin>>str;	
	}
	void printStr(){
	string *ptr=&str;
	cout<<"String are:"<<*ptr<<endl;	
	}
};

int main(){
	PrintStr string;
	string.getstr();
	string.printStr();
}
	
