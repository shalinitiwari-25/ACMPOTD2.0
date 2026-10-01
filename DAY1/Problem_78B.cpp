#include <iostream>
#include <vector>

using namespace std;

int main(){

    //input
    int n;
    cin >> n;

    //logic
    string ans;
    vector<char> temp = {'R','O','Y','G','B','I','V'};

    int rem = n % 7;

    for (int i = 0; i < n; i++){
        ans += temp[i % 7];

    }

    if (rem == 1) {
        ans[n-1] = 'G';
    }
    else if (rem == 2) {
        ans[n-2] = 'Y';
        ans[n-1] = 'G';
    }
    else if (rem == 3) {
        ans[n-3] = 'Y';
        ans[n-2] = 'G';
        ans[n-1] = 'B';
    }
    
    //output
    
    cout << ans;
}