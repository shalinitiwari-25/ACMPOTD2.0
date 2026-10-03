#include <iostream>
#include <vector>

using namespace std;

int main(){

    //input
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //logic
    long long sum =0;
    vector<int> temp;
    for(int i=0;i<n; i++){
        sum += arr[i];
    }
    for(int i =0; i<n; i++){
        if((long long)arr[i] * (n - 1) == sum - arr[i]){
            temp.push_back(i + 1);
        }
    }
    
    //output
    cout << temp.size() << endl;

    for(int i=0; i< temp.size(); i++){
        cout <<temp[i] << " ";
    }
    
    return 0;
}