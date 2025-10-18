#include<iostream>
using namespace std;

class GreatestNum {
    int num1, num2;

public:
    void inputNum() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    int checkprint() {
        // Using 'this' pointer to access member variables    
        if (this->num1 > this->num2) {
            cout << "First number is greater: ";
            return this->num1;
        } else {
            cout << "Second number is greater: ";
            return this->num2;
        }
    }
   
};

int main() {
    GreatestNum obj;
    obj.inputNum();
    int great=obj.checkprint();
    cout << great << endl;

}

