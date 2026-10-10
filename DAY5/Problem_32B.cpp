#include <iostream>
#include <stack>

using namespace std;

int main (){

    //input
    string n;
    cin >> n;

    //logic
    stack<int> mystack;
    string ans = "";

    for (int i = 0; i < n.size(); i++) {

        if (mystack.empty()) {
            mystack.push(n[i]);
            
            if (mystack.top() == '.') {
                ans += "0";
                mystack.pop();
            }
        } 
        else {
            if (n[i] == '.') {
                ans += "1";
            } else if (n[i] == '-') {
                ans += "2";
            }
            mystack.pop();
        }
    }

    //output
    cout<< ans;
    return 0;
    
}
