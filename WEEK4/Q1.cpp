#include <iostream>
#include <string>
using namespace std;

class CountVowels {
    string str;
    int count;

public:
    void InputStr() {
        cout << "Enter a string: ";
		cin>>str;
    }

    void countStr() {
        count = 0;
        for (int i = 0; i < str.length(); i++) {
            char* ptr = &str[i];  // point to current character

            char ch = *ptr;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                count++;
            }
        }
    }

    void printCount() {
        cout << "Number of vowels are: " << count << endl;
    }
};

int main() {
    CountVowels callvalue;
    callvalue.InputStr();
    callvalue.countStr();
    callvalue.printCount();
}

