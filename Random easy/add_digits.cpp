/*
Problem: Add Digits
Platform: LeetCode
Link: https://leetcode.com/problems/add-digits/description/

Approach:
- the remainder returns the value while dividing the number by 9
- if its multiple of 9, then we should return 9
- if the number is 0 then return 0

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if(num == 0){
            return 0;
        } else if (num % 9 == 0) {
            return 9;
        } else {
            return num % 9;
        }
        
    }
};