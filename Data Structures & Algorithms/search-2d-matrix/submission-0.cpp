class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int left=0;
        int right=r*c-1;
        while(left<=right){
            int middle=left+(right-left)/2;
            int mid=matrix[middle/c][middle%c];
            if(target==mid){
                return true;
            }else if(target > mid){
                left=middle+1;
            }else{
                right=middle-1;
            }
        }
        return 0;
    }
};