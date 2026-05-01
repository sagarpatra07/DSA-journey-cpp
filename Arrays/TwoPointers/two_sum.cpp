/*
Problem: Two Sum II
Platform: LeetCode
Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

Approach:
- Using 2 Pointers method
- Check sum

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size() - 1;

        while(start<end){
            int sum = numbers[start] + numbers[end];

            if(sum == target){
                return {start+1, end+1}; //As it's 1-indexed array
            } else if(sum < target){
                start++;
            } else { 
                end--; //if sum > target
            }
        }
        return {};
    }
};