// Example 1:
// Input: nums = [1,2,3]
// Output: [1,3,2]
// Example 2:
// Input: nums = [3,2,1]
// Output: [1,2,3]
// Example 3:
// Input: nums = [1,1,5]
// Output: [1,5,1]
// Code :-

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int golaidx = -1;
        for(int i=n-1; i>0; i--){
            if(nums[i]>nums[i-1]){
                golaidx = i-1;
                break;
            }
        }
        if(golaidx!=-1){
            int swapidx = golaidx;
            for(int i=n-1; i>=golaidx+1; i--){
                if(nums[i]>nums[golaidx]){
                    swapidx=i;
                    break;
                }
            }
            swap(nums[golaidx],nums[swapidx]);
        }
        reverse(nums.begin()+golaidx+1,nums.end());
    }
};
