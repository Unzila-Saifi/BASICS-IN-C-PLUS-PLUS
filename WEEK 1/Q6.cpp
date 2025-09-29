#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter a character"<<endl;
	cin >> ch;
	if(ch>= 'a'&& ch<='z'){
		cout <<"this is small letter"<<endl;
	}
	else if(ch>='A'&& ch<='z'){
		cout <<"this is capital letter" <<endl;
	}
	else if(ch>='0' && ch<='9'){
		cout<< "this is a digit" <<endl;
	}
	else{
		cout <<"special symbol";
	}
}
