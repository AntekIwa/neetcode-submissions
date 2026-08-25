class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<int>> mp;
        for(int i = 0; i < strs.size(); i++){
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            mp[tmp].push_back(i);
        }
        vector<vector<string>> res;
        for(auto [a, b] : mp){
            vector<string> subres;
            for(int i : b) subres.push_back(strs[i]);
            res.push_back(subres);
        }
        return res;
    }
};
