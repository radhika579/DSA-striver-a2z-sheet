#include <iostream>
using namespace std;
/*
functiona are set of code which performs something for you
functions are used to modularise code
functions are used to increase readability
functions are used to use same code multiple time
void -> which does not return anything
return
parameterised
non parameterised

*/

/*void printName(string name) {
     cout << "hey " << name << endl;
}
    int main() {
        string name;
        cin >> name;
        printName(name);

        string name2;
        cin >> name2;
        printName(name2);
*/
//take two numbers and print its sum
//return function
/*int sum(int num1, int num2) {
    int num3 = num1 + num2; //5 + 6 = 11
    return num3;
}
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int res =sum(num1, num2);
    cout << res;
*/
/*int max(int num1, int num2) {
    // 5 >= 6
    if(num1 >= num2) {
        return num1;
    }
    return num2;
    //looking for a return line
}
int main () {
    int num1, num2;
    cin >> num1 >> num2;
    int minimum = min(num1, num2);
    cout << minimum;
*/

//pass by value
/*void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main (){

    int num = 10;
    doSomething(num);
    cout << num << endl;
*/

//pass by reference
/*void  doSomething(string &s) {
    s[0] = 't';
    cout << s << endl;

}
int main () {
    string s = "raj";
    doSomething(s);
    cout << s << endl;
*/
/*void doSomething(int &num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main() {
    int num = 10;
    doSomething(num);
    cout << num << endl;
*/
/*void doSomething(int &num) {
    
}
int main() {
    int arr[5]
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[0] <<endl <<arr[1] <<endl << arr[2];
*/
//pas by reference
void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "value inside function: " << arr[0] << endl;
    
}
int main() {
    int n = 5;
    int arr[n]
    for(int i = 0; i<=n; i = i + 1) {
        cin >> arr[i];
    }
    doSomething(arr, n);
     cout << "value inside int main: " << arr[0] << endl;
    return 0;
}


