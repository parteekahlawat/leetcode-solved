class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size(), m = matrix.size();
        int l = 0, h = m-1;
        int mid = (l+h)/2;
        while(l<=h){
            mid = (l+h)/2;
            if(matrix[mid][0]==target){
                return true;
                }
            else if(matrix[mid][0]>target){
                h = mid-1;
                }
            else if(matrix[mid][0]<target){
                l = mid+1;
                }
            }
        if(matrix[mid][0]>target){
            mid--;
        }
        if(mid<0){
            return false;
        }
        int lv = 0, hv = n-1;
        int midv = (lv+hv)/2;
        while(lv<=hv){
            midv = (lv+hv)/2;
            if(matrix[mid][midv]==target){
                return true;
                }
            else if(matrix[mid][midv]>target){
                hv = midv-1;
                }
            else if(matrix[mid][midv]<target){
                lv = midv+1;
                }
            }
        return false;
    }
};