/*
Problem: Segregate 0s and 1s
Platform: geeksforgeeks
Link: https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1

Approach:
- Using 2 Pointers method
- Check for 0s from the start and 1s from the end, if not the swap and start++ and end--

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int start = 0;
        int end = arr.size() - 1;
        
        while(start < end){
            if(arr[start] == 0){
                start ++;
            } else if(arr[end] == 1){
                end--;
            } else {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                
                start++;
                end--;
            }
        }
    }
};