/*
Problem: Squares of a Sorted Array
Platform: LeetCode
Link: https://leetcode.com/problems/squares-of-a-sorted-array/

Approach:
- Using 2 Pointers method
- Check sum

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> arr1;
        vector<int> arr2;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= 0){
                arr1.push_back(nums[i]); //positive array
            } else {
                arr2.push_back(nums[i]); //negative array
            }
        }

        if(arr2.size() == 0){
            for(int i=0; i<arr1.size(); i++){
                arr1[i] = arr1[i] * arr1[i];
            }
            return arr1;
        }

        if (arr1.size() == 0){
            for(int i=0; i<arr2.size(); i++){
                arr2[i] = arr2[i] * arr2[i];
            }
        reverse(arr2.begin(), arr2.end()); // now its in ascending order
        return arr2;
        }

        
        for(int i=0; i<arr1.size(); i++){
            arr1[i] = arr1[i] * arr1[i];
        }

        for(int i=0; i<arr2.size(); i++){
            arr2[i] = arr2[i] * arr2[i];
            }
        reverse(arr2.begin(), arr2.end()); // now its in ascending order        

        int i = 0; //index for arr1
        int j = 0; //index for arr2
        int id = 0; //index for the final array

        while(i<arr1.size() and j<arr2.size()){
            if(arr1[i] <= arr2[j]){
                nums[id] = arr1[i];
                i++;
                id++;
            } else {
                nums[id] = arr2[j];
                j++;
                id++;
            }
        }
        
        //for remaining elements of arr1
        while(i < arr1.size()){
            nums[id] = arr1[i];
            i++;
            id++;
        }

        //for remaining elements of arr2
        while(j < arr2.size()){
            nums[id] = arr2[j];
            j++;
            id++;
        }
        return nums;
    }
};