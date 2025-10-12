//concate string
#include<iostream>
#include<string>
using namespace std;

class concatstr{
	string str1;
	string str2;
	string str3;
	public:
	void getStr(){
	cout<<"Enter a first string:"<<endl;
	cin>>str1;
	cout<<"Enter a Second string:"<<endl;
	cin>>str2;	
	}
	void concstr(){
	str3=str1+" "+str2;
	cout<<"concatenate strings:"<<str3<<endl;	
	}
};
int main(){
	concatstr string;
	string.getStr();
	string.concstr();
}
	
