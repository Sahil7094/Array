/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
Return the sum of the three integers.
You may assume that each input would have exactly one solution.
Example 1:
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
Example 2:
Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
Code :-
*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int closestSum = 100000;
        for(int i=0; i<n-2; i++) {
            int j = i+1, k = n-1;
            while(j<k) {
                int sum = nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-closestSum)) {
                    closestSum = sum;
                }
                if(sum > target)
                    k--;
                else
                    j++;
            }
        }
        return closestSum;
    }
};
