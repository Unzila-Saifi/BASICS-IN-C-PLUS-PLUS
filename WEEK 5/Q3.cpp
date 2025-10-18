#include <iostream>
using namespace std;

int main() {
    char sentence[200], findstr[50], replaceStr[50], result[300];
    int i = 0, j = 0, k = 0;
    cout << "Enter the sentence: ";
    cin.getline(sentence, 200);

    cout << "Enter the string to find: ";
    cin.getline(findstr, 50);

    cout << "Enter the replacement string: ";
    cin.getline(replaceStr, 50);
    // calculate lengths findstr
    int findStrLen = 0;
    while (findstr[findStrLen] != '\0') {
        findStrLen++;
    }
   //calculate lengths replace string
    int replLen = 0;
    while (replaceStr[replLen] != '\0') {
        replLen++;
    }

    while (sentence[i] != '\0') {
        // Check  findStr match current position or not
        bool match = true;
        for (int f = 0; f < findStrLen; f++) {
            if (sentence[i + f] != findstr[f]) {
                match = false;
                break;
            }
        }

        if (match) {
            // Copy replacement into result
            for (int r = 0; r < replLen; r++) {
                result[k++] = replaceStr[r];
            }
               i += findStrLen;
        } else {
            // Copy current character
            result[k++] = sentence[i++];
        }
    }

    result[k] = '\0'; // Null terminate the result string

    cout << "After changing the sentence: " << result << endl;

    return 0;
}

