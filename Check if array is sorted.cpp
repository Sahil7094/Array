// Examples:-
// Input: arr[] = [10, 20, 30, 40, 50]
// Output: true
// Explanation: The given array is sorted.
// Input: arr[] = [90, 80, 100, 70, 40, 30]
// Output: false
// Explanation: The given array is not sorted.

// code :-

class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        int n = arr.size();
        for(int i=1; i<n; i++){
            if(arr[i]<arr[i-1]){
                return false;
            }
        }
        return true;
    }
};
