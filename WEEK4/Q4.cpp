// call with object has invoked it using the'this' pointer.
#include<iostream>
using namespace std;

class pntr_obj{
	int roll_no;
	string  name;
	public:
		void set_data(int roll , string myname){
		   roll_no=roll;
		    name=myname;
		}
	    void print(){
	    	cout<<"Adress of This Object:"<<this<<endl;
	    	cout<<"Roll no. are:"<<roll_no<<endl;
	    	cout<<"Name are:"<<name<<endl;
		}
};

int main(){
	pntr_obj obj1,obj2,obj3;
//	set value
	obj1.set_data(1,"Unzila");
	obj2.set_data(2,"Inavat");
	obj3.set_data(3,"Ashiya");
//  call 
	obj1.print();
	obj2.print();
	obj3.print();
}
