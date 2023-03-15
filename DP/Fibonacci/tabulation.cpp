// Time Complexity: O(N)
// Space Complexity: O(N) but better than memoization because: memoization: O(N)+O(N) while it is O(N+1)

#include <iostream>
#include <vector>

using namespace std;

int fibo(int n)
{

    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}