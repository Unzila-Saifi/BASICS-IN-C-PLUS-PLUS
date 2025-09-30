#include<iostream>
using namespace std;
int main(){
	
	int i;
	int arr[20],n;
	cout<<"enter a size of array:"<<endl;
	cin>>n;
	cout<<"enter an array element:"<<endl;
	for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
	cout<<"Display an array element:"<<endl;  //display array
		for(i=0;i<n; i++){
			cout<<arr[i]<<" "<<endl;
		}
	cout<<"count an array element:"<<endl;  //count array
		cout<<n<<" "<<endl;
	cout<<"even numbers are:"<<endl; //even no.
	for(i=0;i<n; i++){
		if(arr[i]%2==0){
		cout<<arr[i]<<" "<<endl;
     	}
	}
	
	cout<<"odd numbers are:"<<endl;
	for(i=0;i<n; i++){
		if(arr[i]%2!=0){         //odd no.
		cout<<arr[i]<<" "<<endl;
     	}
	}
	cout<<"Display an positive array element:"<<endl;
		for(i=0;i<n; i++){
			if(arr[i]>0){      //positive integers
		cout<<arr[i]<<" "<<endl;
			}
		}
			cout<<"Display an negative array element:"<<endl;
		for(i=0;i<n; i++){
			if(arr[i]<0){        //negative integers
		cout<<arr[i]<<" "<<endl;
			}
		}
}
