class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        if(n<3){
            return false;
        }
        for(int i=0;i<arr.size()-2;i++){
            if(arr[i]%2!=0){
                if(arr[i+1]%2!=0){
                if(arr[i+2]%2!=0){
                return true;
            }
            }
            }
        }
        return false;
    }
};