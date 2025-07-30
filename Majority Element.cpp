// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Example 1:
// Input: nums = [3,2,3]
// Output: 3
// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
// Code :- 
//Brute force Solution :-
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(nums[i]==nums[j]) cnt++;
            }
            if(cnt>n/2) return nums[i];
        }    
        return {};
    }
};
//Better solution:-
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mpp;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            if(it.second>n/2){
                return it.first;
            }
        }
        return {};
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
// Optimal Solution Moore's voting Algorithm :-
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        int el;
        for(int i=0; i<n; i++){
            if(cnt==0){
                cnt++;
                el=nums[i];
            }
            else if(el==nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0; i<n; i++){
            if(el==nums[i]){
                cnt1++;
            }
        }
        if(cnt1>n/2) return el;
        return {};
    }
};
