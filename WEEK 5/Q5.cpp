#include <iostream>
using namespace std;

class Sentences {
char S[500], T[100];
public:
void input() {
cout << "Enter the string (S): ";
cin.getline(S, 500);
cout << "Enter the string (T): ";
cin.getline(T, 100);
}


void process() {
    int i, j, start;
    int lenS = 0, lenT = 0;

    // Find length of S
    while (S[lenS] != '\0') {
        lenS++;
    }
    // Find length of T
    while (T[lenT] != '\0') {
        lenT++;
    }

    // Search manually
    for (i = 0; i <= lenS - lenT; i++) {
        start = i;
        for (j = 0; j < lenT; j++) {
            if (S[i + j] != T[j]) {
                break; // mismatch
            }
        }
        if (j == lenT) { // full match found
            cout << "T string start at index: " << start << endl;
            return;
        } 
    }

    // If no match found
    cout << 1 << endl;
}

};

int main() {
Sentences Find;
Find.input();
Find.process();
return 0;
}

