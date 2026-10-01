#include <iostream>
#include <vector>

using namespace std;

int main(){

    //input
    int n, m;
    cout << "Value of n: ";
    cin >> n;
    cout << "Value of m: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    cout<< "fill the matirx (only 1 and 0 allowed): \n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j< m; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j];
        }
        cout << '\n';
    }
    
    //logic

    int top = n;
    int bottom = -1;
    int left = m;
    int right = -1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j< m; j++) {
            if (matrix[i][j] == 1) {
                top = min(top, i);
                bottom = max(bottom, i);
                left = min(left, j);
                right = max(right, j);
            }
        }
    }
    
    //output
    
    cout << "final rectangle that bob will send is: \n";
    
    for (int i = top; i <= bottom; i++) {
        for (int j = left; j <= right; j++) {
            cout << matrix[i][j];
        }
        cout << '\n';
    }

}