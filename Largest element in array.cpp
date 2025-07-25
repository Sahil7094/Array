// Example 1:
// Input: arr[] = {2,5,1,3,0};
// Output: 5
// Explanation: 5 is the largest element in the array. 

// Example2: 
// Input: arr[] = {8,10,5,7,9};
// Output: 10
// Explanation: 10 is the largest element in the array. 

// Code :-Brute force Approach

class solution{
public:
    int largestElement(vector<int>& nums){
        int n = nums.size();
        sort(nums.begin(),nums.end());
        return nums[n-1];
   }
};

Code :- Optimal Approach

class solution{
public:
  int largestElement(vector<int>& nums){
      int n = nums.size();
      int largest=nums[0];
      for(int i=0; i<n; i++){
          if(nums[i]>largest){
            largest=nums[i];
          }
    }
    return largest;
  }
};
