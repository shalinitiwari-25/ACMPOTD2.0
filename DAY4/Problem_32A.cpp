#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main (){
    
    //input
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    //logic
    int temp = 0;
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (abs(arr[j] - arr[i]) <= d){
                temp += 2;
            }
        }
    }

    //output
    cout << temp;
    return 0;
}