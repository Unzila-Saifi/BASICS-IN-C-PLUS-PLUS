//Length of a String Using a Pointer
#include<iostream>
using namespace std;

class lengthstr{
	string str;
	int count;
	public:
		void inputstr(){
			cout<<"enter a string:"<<endl;
			cin>>str;
		}
		void lenstr(){
		count=0;
			for(int i=0 ;i<str.length();i++){
				char* ptr = &str[i];
				count++;
			}
		cout<<"length of String are:"<<count;
		}
};
int main(){
	lengthstr callvalue;
	callvalue.inputstr();
	callvalue.lenstr();
}
