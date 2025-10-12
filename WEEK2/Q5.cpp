#include<iostream>
using namespace std;
int main(){
	int size,i;
	int idx;
	cout<<"enter the size of array element:"<<endl;
	cin>>size;
	cout<<"enter " <<size<< " elements:"<<endl;
	int arr[size];
	for(i=0; i<size; i++){
		cin>>arr[i];
	}
    cout << "Enter the index (0-based):"<<endl;//0-based index
    cin >> idx;
    int rev=size-1-idx; //when input start pos exactly same position for last 
    if(idx!=rev){
    	int temp=arr[idx];
    	arr[idx]=arr[rev];
    	arr[rev]=temp;
	}
	
	cout<<"After Reversing the position:"<<endl;
	for(i=0;i<size; i++){
		cout<<arr[i]<<" ";
	}
}
