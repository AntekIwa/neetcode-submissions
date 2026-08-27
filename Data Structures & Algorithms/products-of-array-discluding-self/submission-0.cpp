class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = 0;
        long long prod = 1;
        for(int i : nums){
            if(i == 0) zeros++;
            else prod *= i;
        }
        vector<int> res;
        for(int i : nums){
            if(i == 0 && zeros == 1) res.push_back(prod);
            else if(i == 0) res.push_back(0);
            else{
                if(zeros) res.push_back(0);
                else res.push_back(prod/i);
            }
        }
        return res;
    }
};
