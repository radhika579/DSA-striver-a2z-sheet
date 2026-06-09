#include<iostream>
#include<string>
using namespace std;

 int main () {
   //int raj,x can be a number that will be a charachter
   int x = 10;
   //long can be used to store number
   long x = 15;
   cin >> x;
   //long long
   long long x = 1500000;
   //float, double
   float x = 5.6;
   float y = 5;
   double y = 5;
   cout << "Value of y: " <<y;
   //string and getline
   string s1;
   string s2;
   cin >> s1 >> s2;
   cout << s1 << s2;
   string str;
   getline(cin, str);
   cout << str;
   //char 
   char ch;
   cin >> ch;
   cout << ch;
   //char as string
   string ch = "g";
   cout << ch;

    return 0;
} 