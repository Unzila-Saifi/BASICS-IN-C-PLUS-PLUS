//given string is a palindrome
#include <iostream>
using namespace std;

class palindromeStr{
	string str;
	public:
	void input(){
	cout<<"Enter a String:"<<endl;
	getline(cin,str);//getline use to read string withspace
	}
    void processedInput(){
    	int strlen = str.length();
        bool palindrome=true;
    for (int i = 0; i < strlen/ 2; i++) {
        if (str[i] != str[strlen- i - 1]) {
        palindrome=false;
        break;
         }
      }
      if(palindrome){
      	cout<<"Given string is palindrome!!"<<endl;
	  }
	  else{
	  	cout<<"Given string is Not palindrome!!"<<endl;
	      }
       }
    };
int main(){
	palindromeStr ispalindrome;
	ispalindrome.input();
	ispalindrome.processedInput();
}
