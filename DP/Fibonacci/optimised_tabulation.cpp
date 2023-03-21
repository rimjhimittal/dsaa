// Most Optimised Solution
//  Time Complexity: O(N)
//  Space Complexity: O(1) becuase we have just used 3 variables
#include <iostream>
#include <vector>
// h
using namespace std;

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int prev1 = 0;
    int prev2 = 1;
    int curr = 1;
    for (int i = 2; i <= n; i++)
    {
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return curr;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}