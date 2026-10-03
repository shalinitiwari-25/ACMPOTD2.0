#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){

    //input
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin >>arr[i];
    }

    //logic
    long long sum =0;
    long long temp = LLONG_MAX;
    for(int i=0;i<n; i++){
        sum += arr[i];
        if(arr[i]%2 != 0){
            temp =min(temp, (long long)arr[i]);
        }
    }

    if (sum % 2 != 0){
        sum = sum - temp;
    }

    cout << sum;
    
    
    return 0;
}