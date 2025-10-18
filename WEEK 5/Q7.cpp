// 
#include<iostream>
using namespace std;

class myclass{
	int num;
	public:
		void set_data(int n){
		   num=n;
		}
	    void print(){
	    	cout<<"Adress of 'This' keyword:"<<this<<endl;
	    	cout<<"number are:"<<num<<endl;	
		}
};

int main(){
	myclass obj;
//	set dataaa 
	obj.set_data(101);
	
//  call print() function
	obj.print();
	
}
