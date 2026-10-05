#include <iostream>
#include <vector>

using namespace std;

int main (){

    //input
    long long y,k,n;
    cin >> y >> k >> n;

    //logic
    long long first_multiple = ((y / k) + 1) * k;

    bool found = false;
    for (long long sum = first_multiple; sum <= n; sum += k) {
        long long x = sum - y;
        cout << x << " ";
        found = true;
    }

    if (!found) {
        cout << -1;
    }

    return 0;

}