// sum array n element
#include<iostream>
using namespace std;

class sumArr{
	
    int size , i;
    int sum=0;
    int arr[50];
    public:
    void arraySize(){
    	cout<<"Enter a Size of Array Elements:";
    	cin>>size;
	}
	void PutArray(){
		cout<<"Input a array elements:"<<endl;
		for(i=0; i<size; i++){
		 cin>>arr[i];
		}
	}
	void PrintSum(){
		int *ptr=arr;
		for(i=0; i<size; i++){
		sum+=*(ptr+i);	
	    }
cout<<"Sum of array Elements:"<<sum;
	}
};
int main(){
	sumArr AllArraySum;
	AllArraySum.arraySize();
	AllArraySum.PutArray();
	AllArraySum.PrintSum();
}
