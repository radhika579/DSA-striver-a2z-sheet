#include<iostream>
using namespace std;
//print a square pattern with equal number of rows and columns
void print1(int n) {
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<n;j++) {
            cout << "*";
        }
        cout << endl;
    }
}
//print a left side triangle with stars
void print2(int n) {
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<=i;j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
//print a triangle with numbers in increasing order
void print3(int n) {
    for(int i = 1;i<n;i++) {
        for(int j = 1;j<=i;j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
//print a triangle with numbers with every number similar to row number
void print4(int n) {
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=i;j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}
//inverted triangle of stars
void print5(int n) {
    for(int i = 1;i<=n;i++) {
        for(int j = 0;j<n-i+1;j++) {
            cout <<"* ";
        }
        cout << endl;
    }
}
//inverted triangle of numbers
void print6(int n) {
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<n-i+1;j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
//a full upward triangle with stars
void print7(int n) {
    for(int i = 0;i<n;i++) {
        //space
        for(int j = 0;j<n-i-1;j++) {
            cout << " ";
        }
        //star
        for(int j = 0; j< 2*i+1; j++) {
            cout << "*";

        }
        //space
        for(int j = 0;j<n-i-1;j++) {
            cout << " ";
        }
        cout << endl;
    }
}
//a full downward triangle with stars
void print8(int n) {
    for(int i = 0;i<n;i++) {
        //space
        for(int j = 0;j<i;j++) {
            cout << " ";
        }
        //star
        for(int j = 0; j<2*n - (2*i+1); j++) {
            cout << "*";

        }
        //space
        for(int j = 0;j<i;j++) {
            cout << " ";
        }
        cout << endl;
    }
}
//
void print10(int n) {
    for(int i = 1;i<=2*n-1;i++) {
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j = 1;j<=stars;j++) {
            cout << "*";
        }
        cout << endl;
    }
}
 int main () {
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n;
        cin >> n;
        print10(n);
    }
} 