#include<bits/stdc++.h>
using namespace std;

void ispal(int n){
    string str = to_string(n);
    stack<int>s;

    for(int i = 0; i < str.size(); i++){
        s.push(str[i]);
    }
    string rev = "";

    while(!s.empty()){
        rev.push_back(s.top());
        s.pop();
    }

    if(str == rev){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }

}

int main(){
    int n;
    cin >> n;

    ispal(n);
}