#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    //input
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> matrix (n,vector<int>(m));
    for(int i = 0; i< n; i++){
        string row;
        cin >> row;
        for (int j=0; j< m; j++){
            matrix[i][j] = row[j] - '0';
        }
    }

    //logic
    for(int i = 0; i< n; i++){
        for (int j=0; j< m; j++){
            if(matrix[i][j] != matrix[i][0]){
                cout << "NO\n";  
                return 0;
            }
            
        }
        if (i < n - 1) {
            if (matrix[i][0] == matrix[i+1][0]) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    //output
    cout << "YES\n";
    return 0;
}