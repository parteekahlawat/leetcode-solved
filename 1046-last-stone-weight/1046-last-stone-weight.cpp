class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> ans;
        for(int i:stones){
            ans.push(i);
        }
        while(ans.size()!=1){
            int a = ans.top();
            ans.pop();
            int b = ans.top();
            ans.pop();
            ans.push(a-b);
        }
        return ans.top();
    }
};