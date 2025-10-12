#include<iostream>
#include<algorithm> // include function for sort()
using namespace std;

int main() {
    int i, j;
    int size1 , size2;
    cout<<"Enter size of first array element:"<<endl;
    cin>>size1;
    cout<<"Enter size of second array element:"<<endl;
    cin>>size2;
    int arr1[size1], arr2[size2];
    cout << "First Array Elements:" << endl;
    for(i = 0; i <size1; i++) {
        cin >> arr1[i];
    }

    cout << "Second Array Elements:" << endl;
    for(i = 0; i <size2 ; i++) {
        cin >> arr2[i];
    }

    int merge[size1+size2]; // New array merge
    
    for(i=0; i<size1; i++){
    	merge[i]=arr1[i]; // add one array for 0 index in merge  
	}
   
    for(i=0; i<size2; i++){
    	merge[size1+i]=arr2[i]; //add second array for after first array  index in merge
	}
	sort(merge, merge + size1 + size2); //sort merge in ascending order from min to max
	cout<<"merged array in ascending order:"<<endl;
	for(i=0; i<size1+size2; i++){
		cout << merge[i] << " ";
	}
    return 0;
}

