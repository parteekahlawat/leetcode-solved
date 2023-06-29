class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> v(100001,"");
        for(int i=0;i<names.size();i++)
        {
            v[heights[i]]=names[i];
        }
        reverse(v.begin(),v.end());
        v.erase(remove(v.begin(),v.end(),""), v.end());
        return v;
    }
};