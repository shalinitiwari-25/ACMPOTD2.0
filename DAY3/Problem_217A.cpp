#include <iostream>
#include <vector>

using namespace std;

void explore_island(int current_drift, const vector<vector<int>>& matrix, vector<bool>& visited) {
    visited[current_drift] = true;

    for (int next_drift = 0; next_drift < matrix.size(); next_drift++) {
        if (!visited[next_drift]) {
            if (matrix[current_drift][0] == matrix[next_drift][0] || 
                matrix[current_drift][1] == matrix[next_drift][1]) {
                
                explore_island(next_drift, matrix, visited);
            }
        }
    }
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<vector<int>> matrix(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        cin >> matrix[i][0] >> matrix[i][1];
    }

    vector<bool> visited(n, false);
    int total_groups = 0;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            total_groups++;

            explore_island(i, matrix, visited);
        }
    }

    cout << total_groups - 1 << endl;

    return 0;
}
