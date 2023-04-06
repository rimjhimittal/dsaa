// You are given a sorted unique integer array nums.

// A range [a,b] is the set of all integers from a to b (inclusive).

// Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

// Each range [a,b] in the list should be output as:

// "a->b" if a != b
// "a" if a == b
#include<iostream>
#include<vector>
using namespace std;

    vector<string> summaryRanges(vector<int>& nums) {
      vector<string> ans;
        if(nums.size()==0){
            return ans;
        }
        if(nums.size()==1){
            ans.push_back(to_string(nums[0]));
            return ans;
        }

        int i = 1;
        int a = nums[0];
        
        for(i = 1; i < nums.size(); i++){
            if(nums[i-1]+ 1 != nums[i]){
                if(a==nums[i-1]){
                    ans.push_back(to_string(a));
                     a=nums[i];
                }
                else{
                ans.push_back(to_string(a)+ "->"+ to_string(nums[i-1]));
                a=nums[i];
            }
            }
        }
       
         if (a == nums[i-1]) {
            ans.push_back(to_string(a));
        } else {
            ans.push_back(to_string(a) + "->" + to_string(nums[i-1]));
        }
         return ans;
    }
int main()
{
    vector<int> nums = {0,1,2,4,5,7};
vector<string> res = summaryRanges(nums);
    for (string s : res) {
        cout << s << " ";
    }}