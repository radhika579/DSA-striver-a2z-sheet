
#include <iostream>
using namespace std;
//write a program that takes an input of age
//and prints if you are adult or not
// >= 18, yes
// < 18, no
//also can be written else if(age <18)
int main() {
    int age;
    cin >> age;
    if(age >= 18) {
        cout << "you are an adult!";
    }

    else if(age<10) {
        cout << "you are not an adult!";
    }
    
    return 0;
}