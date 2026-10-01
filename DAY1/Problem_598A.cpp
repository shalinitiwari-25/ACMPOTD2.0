#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    //input
    int t;
    cin >> t;
    vector<long long> arr;
    for (int j = 0; j < t; j++){
        long long n;
        cin >> n;
        arr.push_back(n);
    }

    //logic
    for(long long w : arr){
        long long sum = (w * (w + 1)) / 2;

        long long sum_of_powers_of_2 = 0;

        for (long long p2 = 1; p2 <= w; p2 <<= 1) {
            sum_of_powers_of_2 += p2;
        }

        long long final_answer = sum - (2 * sum_of_powers_of_2);
        
        cout << final_answer << "\n";
    }

    return 0;

}