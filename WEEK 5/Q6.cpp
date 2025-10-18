
#include<iostream>
using namespace std;
class flight{
	int flight_no= 256;
	string source="Canada";
	string destination="London";
	double fare= 750.3;
	public:
	void display(){
	cout<<"flight no.:"<<this->flight_no<<endl;
	cout<<"source are:"<<this->source<<endl;
	cout<<"destination are:"<<this->destination<<endl;
	cout<<"fare:"<<this->fare;
	}
};
int main(){
	flight obj;
	obj.display();
}
