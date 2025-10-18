#include<iostream>
using namespace std;
class operationStr{
	string mainStr, subStr;
    int insertPos;
    int deletePos, numChars;
    public:
    void insertStr(){
   	cout << "Enter the main string: ";
    getline(cin, mainStr); //getline use to read withspace str
    cout << "Enter the substring to insert: ";
    getline(cin, subStr);
    cout << "Enter the position to insert the substring: ";
    cin >> insertPos;
   }                          
   void performStr(){
   	if (insertPos >= 0 && insertPos <= mainStr.length()) {
        mainStr = mainStr.substr(0, insertPos) + subStr + mainStr.substr(insertPos);
        cout << "String after insertion: " << mainStr << endl;
    } else {
        cout << "Invalid insertion position." << endl;
    }
   }	
	void deleteStr(){
    cout << "\nEnter the position to start deletion: ";
    cin >> deletePos;
    cout << "Enter the number of characters to delete: ";
    cin >> numChars;

    if (deletePos >= 0 && deletePos < mainStr.length() && numChars >= 0) {
        mainStr = mainStr.substr(0, deletePos) + mainStr.substr(deletePos + numChars);
        cout << "String after deletion: " << mainStr << endl;
    } else {
        cout << "Invalid deletion parameters." << endl;
    }
	
	}
};

int main(){
	operationStr  objStr; 
	objStr.insertStr();
	objStr.performStr();
	objStr.deleteStr();
}
