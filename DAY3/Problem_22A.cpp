#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    //input

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //logic
    
    sort(arr.begin(), arr.end());

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    //output

    if (arr.size() < 2) {
        cout << "NO" << endl;
    } else {
        cout << arr[1] << endl; 
    }

    return 0;
}