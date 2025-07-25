/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
Example 1:
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:
Input: height = [4,2,0,3,2,5]
Output: 9
Code :-
  */
class Solution {
public:

    vector<int> leftmax(vector<int> height, int n){
        vector<int> ans;
        stack<int>st;
        for(int i=0; i<n; i++){
            while(!st.empty() && st.top()<=height[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=height[i];
            }
            else{
                ans[i]=st.top();
            }
            st.push(ans[i]);
        }
        return ans;
    }
    vector<int> rightmax(vector<int> height, int n){
        vector<int> ans;
        stack<int>st;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && st.top()<=height[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=height[i];
            }
            else{
                ans[i]=st.top();
            }
            st.push(ans[i]);
        }
        return ans;
    }

    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0 || n==1){
            return 0;
        }
        vector<int> left = leftmax(height,n);
        vector<int> right = rightmax(height,n);
        int totalwater = 0;
        for(int i=0; i<n; i++){
            totalwater += min(left[i],right[i])-height[i];
        }
    return totalwater;
    }
};
