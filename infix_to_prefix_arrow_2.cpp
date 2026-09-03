#include<bits/stdc++.h>
using namespace std;

int precedence(char op){
    if(op == '+' || op == '-')
    return 1;
    if (op == '*' || op == '/')
    return 2;
    
}

bool isRightAssociative(char op)
{
    return op == '^';
}

int main(){
    string Q,P;
    cout<< "Enter infix expression :";
    
}