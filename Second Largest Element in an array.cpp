// Examples:-
// Input: nums = [8, 8, 7, 6, 5]
// Output: 7
// Explanation: The largest value in nums is 8, the second largest is 7
// Input: nums = [10, 10, 10, 10, 10]
// Output: -1
// Explanation: The only value in nums is 10, so there is no second largest value, thus -1 is returned
// Code :-

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        int largest = nums[0];
        int sLargest = -1;
        for(int i=0; i<n; i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i]>sLargest && nums[i]!=largest){
                sLargest = nums[i];
            }
        }
        return sLargest;
    }
};
