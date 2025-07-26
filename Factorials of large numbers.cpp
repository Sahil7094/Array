/*
Given an integer n, find its factorial. Return a list of integers denoting the digits that make up the factorial of n.
Examples:
Input: n = 5
Output: [1, 2, 0]
Explanation: 5! = 1*2*3*4*5 = 120
Input: n = 10
Output: [3, 6, 2, 8, 8, 0, 0]
Explanation: 10! = 1*2*3*4*5*6*7*8*9*10 = 3628800
Input: n = 1
Output: [1]
Explanation: 1! = 1 
Code :-
*/
// User function template for C++

class Solution {
  public:
    void multiply(vector<int>& ans, int& size, int& i){
        int carry = 0;
        for(int j=0; j<size; j++){
            int result = i*ans[j];
            result += carry;
            ans[j] = result%10;
            carry = result/10;
        }
        while(carry) {
            ans[size] = carry%10;
            size++;
            carry /= 10;
        }
    }
    vector<int> factorial(int n) {
        // code here
        vector<int> ans(10000,0);
        ans[0] = 1;
        int size = 1;
        for(int i=2; i<=n; i++){
            multiply(ans,size,i);
        }
        vector<int> res;
        for(int k=size-1; k>=0; k--){
            res.push_back(ans[k]);
        }
        return res;
    }
};
