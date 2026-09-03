// program to check is given number is palindrome using stack 

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int num, original, digit;
    stack<int> s;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0) {
        digit = num % 10;
        s.push(digit);
        num = num / 10;
    }
    num = original;

    while (num > 0) {
        digit = num % 10;

        if (digit != s.top()) {
            cout << "Not a palindrome";
            return 0;
        }

        s.pop();
        num = num / 10;
    }

    cout << "Palindrome";

    return 0;
}