// reverse str
#include<iostream>
#include<cstring> // use in string function
using namespace std;
class stringReverse{

	public:
		void reverse(char *str){
			char *begin =str;
			char *end=str+strlen(str)-1;  
			char temp;
			while(begin<end){
				temp=*begin;
				*begin=*end;
				*end=temp;
				begin++;
				end--;
			}
		}
		void display( char*str){
			cout<<str<<endl;
		}
};
int main(){
	char str[]="Hello";
	
	stringReverse reversar;
	cout<<"Original Given String:"<<endl;
	reversar.display(str);
	reversar.reverse(str);
	cout<<"Reversed The String:"<<endl;
	reversar.display(str);
}
