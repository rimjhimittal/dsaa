// Time Complexity: O(N)
// Space Complexity: O(N)

#include <iostream>
#include <vector>
using namespace std;

int fibo(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << fibo(n, dp) << endl;
}