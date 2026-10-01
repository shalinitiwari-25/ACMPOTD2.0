#include <iostream>
#include <vector>

using namespace std;

int main(){

    //input
    
    int n, m;
    cin >> n;
    cin >> m;

    vector<vector<char>> matrix(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j< m; j++) {
            cin >> matrix[i][j];
        }
    }

    
    //logic

    int top = n;
    int bottom = -1;
    int left = m;
    int right = -1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j< m; j++) {
            if (matrix[i][j] == '*') {
                top = min(top, i);
                bottom = max(bottom, i);
                left = min(left, j);
                right = max(right, j);
            }
        }
    }
    
    //output
    
    
    for (int i = top; i <= bottom; i++) {
        for (int j = left; j <= right; j++) {
            cout << matrix[i][j];
        }
        cout << '\n';
    }

}