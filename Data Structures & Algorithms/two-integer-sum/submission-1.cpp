class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> idx;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
           if(idx.count(target - nums[i])){
                res.push_back(idx[target - nums[i]]);
                res.push_back(i);
                return res;
           }
           idx[nums[i]] = i;
        }
        return res;
    }
};
