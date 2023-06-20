class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       map<int, int> mp;
       set<int> s1;
       set<int> s;

        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
            s1.insert(arr[i]);
        }

        for(auto it:mp){
            s.insert(it.second);
        }

        return s.size() == s1.size();
    }
};