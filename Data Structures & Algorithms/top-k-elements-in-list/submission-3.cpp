class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int i : nums) mp[i] = mp[i] + 1;
        vector<pair<int,int>> cand;
        for(auto [num, cnt] : mp){
            cand.push_back({-cnt, num});
        }
        sort(cand.begin(), cand.end());
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(cand[i].second);
        }
        return res;
    }
};
