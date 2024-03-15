class Solution {
    private:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            vector<int> tmp;
            for(int j=n-1;j>=0;j--){
                tmp.push_back(matrix[j][i]);
            }
            ans.push_back(tmp);
        }
        matrix = ans;
    }
public:
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {
        int i=0;
        while(i!=4){
            i++;
            if(matrix==target) return true;
            else{
                rotate(matrix);
            }
        }
        return false;
    }
};