// using pointers to compute the sum, mean, and standard deviation of all elements
#include<iostream>
#include<cmath>
using namespace std;
 
 class meanArray{
 	int size,i;
 	int arr[50];
 	double sum=0;
 	double mean=0;
 	double Standard_Deviation=0;
 	double var;
 	public:
 	void inputArraysize(){
 		cout<<"Enter a array size:"<<endl;
 		cin>>size;
	 }
	 void inputArray(){
	 	cout<<"Enter a Array Elements:"<<endl;
	   for(i=0;i<size; i++){
	   	cin>>arr[i];
	   }
	 }
	void sumarray(){
		int *ptr=arr;
		for(i=0; i<size; i++){
			sum+= *(ptr+i);	
		}
		cout<<"sum of array:"<<sum<<endl;
	}
	void meanarray(){
	mean=sum/size;
	cout<<"Mean of array Elements:"<<mean<<endl;
	}
	void standardDeviation(){
			int *ptr=arr;
		for(i=0;i<size; i++){
			var+=pow(*(ptr+i)-mean,2);
		}
		Standard_Deviation=sqrt(var/size);
		cout<<"standard deviation are:"<<Standard_Deviation;
	}
 };
 int main(){
 	meanArray callvalue;
 	callvalue.inputArraysize();
 	callvalue.inputArray();
 	callvalue.sumarray();
 	callvalue.meanarray();
    callvalue.standardDeviation();
 }
