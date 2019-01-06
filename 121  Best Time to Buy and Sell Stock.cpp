class Solution {
public:
    int maxProfit(vector<int>& prices) {
        size_t n = prices.size();
        int maxProfit = 0;
        int min = std::numeric_limits<int>::max();
        for(size_t i = 0;i < n;i++){
            min = std::min(min,prices[i]);
            maxProfit = std::max(maxProfit,prices[i]-min);
        }
        return maxProfit;
    }
};
