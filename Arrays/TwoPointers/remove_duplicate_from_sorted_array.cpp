/*
Problem: Remove Duplicates from Sorted Array
Platform: LeetCode
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

Approach:
- Using 2 Pointers method
- first pointer for the unique alloted location of the array
- second pointer to traverse the array and check the current element it points to the previous element

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int first = 0;
        int count = 1;
        int second = 1;

        while(second < nums.size()){
            if(nums[second] == nums[second - 1]){
                second++;
                continue;
            } else {
                nums[first + 1] = nums[second];
                first++;
                count++;
                second++;
            }
        }
        return count;
    }
};