/*
Problem: 3Sum
Platform: LeetCode
Link: https://leetcode.com/problems/3sum/description/

Approach:
- Using 2 Pointers method
- implemented the logic of two sum problem
- here also need to check for duplicate values in the returning array after increment and decrement of indices

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for(int i=0; i<nums.size() - 2; i++){

            //check for duplicate value for i after each iteration
            if(i>0 && nums[i] == nums[i - 1]){
                continue;
            }

            int start = i+1;
            int end = nums.size() - 1;
            int target = -1 * nums[i];

            while(start < end){
                int sum = nums[start] + nums[end];
                if(sum == target){
                    result.push_back({nums[i], nums[start], nums[end]});
                    start++;
                    end--;

                    //check for duplicate start & end value after increment or decrement
                    while(start < nums.size() && nums[start] == nums[start - 1]){
                        start++;
                    }
                    while(end >= 0 && nums[end] == nums[end + 1]){
                        end--;
                    }
                } else if (sum < target){
                    start++;
                } else {
                    end--;
                }
            }           
        }
        return result;
    }
};