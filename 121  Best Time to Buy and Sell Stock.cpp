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
//注意：找的不是最小值和其后最大值的差，而是差的最大值！
