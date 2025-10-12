#include<iostream>
using namespace std;

int main() {
     int i, j,n;
     int product[n][n];
     cout<<"enter the size of n*n matrix:"<<endl;
     cin>>n;
     int a[n][n], b[n][n], c[n][n];
 cout << "Enter elements of First " << n << "x" << n << " Matrix:" << endl;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

cout << "Enter elements of First " << n << "x" << n << " Matrix:" << endl;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    // Matrix addition
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display result
    cout << "Addition of two matrices:" << endl;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            product[i][j] = 0;
            for(int k = 0; k < n; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
cout << "Multiplication of two matrices:" << endl;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

