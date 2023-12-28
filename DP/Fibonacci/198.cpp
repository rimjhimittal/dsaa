#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        vector<int> dp(n+1, -1);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i = 2 ; i < nums.size(); ++i){
            dp[i] = max(nums[i]+ dp[i-2], dp[i-1]);
        }
        return dp[n-1];
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 1};
    int result = s.rob(nums);
    cout << "The maximum amount that can be robbed is: " << result << endl;
    return 0;
}
