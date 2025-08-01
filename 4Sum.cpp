// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.
// Example 1:
// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
// Example 2:
// Input: nums = [2,2,2,2,2], target = 8
// Output: [[2,2,2,2]]

// Code :- 

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int a=0; a<n; a++){
            if(a>0 && nums[a]==nums[a-1]){
                continue;
            }
            for(int b=a+1; b<n; b++){
                if(b>a+1 && nums[b]==nums[b-1]){
                    continue;
                }
                int c=b+1;
                int d=n-1;
                while(c<d){
                    long long sum = 1LL * nums[a] + nums[b] + nums[c] + nums[d];
                    if(sum>target){
                        d--;
                    }
                    else if(sum<target){
                        c++;
                    }
                    else{
                        while(c<d && nums[c]==nums[c+1]){
                            c++;
                        }
                        while(c<d && nums[d]==nums[d-1]){
                            d--;
                        }
                        ans.push_back({nums[a],nums[b],nums[c],nums[d]});
                        c++;
                        d--;
                    }
                }

            }
        }
        return ans;
    }
};
