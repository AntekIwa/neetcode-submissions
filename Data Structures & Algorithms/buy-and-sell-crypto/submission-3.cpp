class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int tail = 0, head = 1;
        int res = 0;
        while(head < n){
            if(prices[head] > prices[tail]) res = max(res, prices[head] - prices[tail]);
            else tail = head;
            head++;
        }
        return res;
    }
};
