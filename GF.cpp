#include <iostream>
#include <vector>
#include <climits>


int matrixChainOrder(const std::vector<int>& p) {
    int n = p.size() - 1; 
    std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0)); 


    for (int len = 2; len <= n; ++len) {
        for (int i = 0; i < n - len + 1; ++i) {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
                int cost = dp[i][k] + dp[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                }
            }
        }
    }
    return dp[0][n - 1];
}

int main() {
    // Example input: dimensions of matrices
    std::vector<int> dimensions = {10, 20, 30, 40, 30};
    
    int minScalarMultiplications = matrixChainOrder(dimensions);

    std::cout << "Minimum scalar multiplications needed: " << minScalarMultiplications << std::endl;

    return 0;
}
