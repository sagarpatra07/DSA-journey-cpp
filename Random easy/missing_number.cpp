/*
Problem: Missing Number
Platform: LeetCode
Link: https://leetcode.com/problems/missing-number/description/?envType=problem-list-v2&envId=array

Approach:
- calculating sum of the length of given array
- calculating the sum of the elements of the array
- returning the diff. between them

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length = nums.size();
        int actual = length * (length + 1) / 2;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }
        return actual - sum;
    }
};