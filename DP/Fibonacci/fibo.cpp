// Memoization

// #include <iostream>
// using namespace std;
// int f(int n, vector<int> &dp){
//     if(n<=1) return n;
//     if(dp[n]!= -1) return dp[n];
//     return dp[n] = f(n-1, dp) + f(n-2, dp);
// }
// int main() {
//     int n;
//     cin>>n;
//     vector<int>dp(n+1, -1);
//     cout<< f(n, dp);
// }

//---------------------------------------------
// Tabulation 

// #include <iostream>
// using namespace std;
// int f(int n, vector<int> &dp){
//     dp[0] = 0;
//     dp[1] = 1;
//     for(int i = 2; i <= n ; i++){
//         dp[i] = dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }
// int main() {
//     int n;
//     cin>>n;
//     vector<int>dp(n+1);
//     cout<< f(n, dp);
// }

//---------------------------------------------
// Space Optimization

#include <iostream>
using namespace std;
int f(int n){
    int first = 0;
    int second = 1;
    int third;
    for(int i = 2; i <= n ; i++){
        third = first+second;
        first = second;
        second = third;
    }
    return third;
}
int main() {
    int n;
    cin>>n;
    cout<< f(n);
}