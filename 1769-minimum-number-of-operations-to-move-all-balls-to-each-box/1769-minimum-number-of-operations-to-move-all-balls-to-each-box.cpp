class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(int i=0;i<boxes.size();i++){
            int tmp=0;
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]=='1'){
                    tmp+=abs(j-i);
                }
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};