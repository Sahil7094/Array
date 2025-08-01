// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]
// Example 2:
// Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
// Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
// Code:- 
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int temp[m][m];
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                temp[i][m-j-1]=matrix[j][i];
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                matrix[i][j]=temp[i][j];
            }
        }
        
    }
};
