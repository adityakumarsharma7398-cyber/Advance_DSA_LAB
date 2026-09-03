// Program to check whether a given number/string is palindrome using stack

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    stack<char> s;

    cout << "Enter a number or string: ";
    cin >> str;

    for (char ch : str) {
        s.push(ch);
    }

    for (char ch : str) {
        if (ch != s.top()) {
            cout << "Not a palindrome";
            return 0;
        }
        s.pop();
    }

    cout << "Palindrome";

    return 0;
}