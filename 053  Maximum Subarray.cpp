class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        /*if(nums.size() ==0){
            return 0;
        }*/
        int ans = nums[0];
        for(int i = 0;i<nums.size();i++){
            sum = sum+nums[i];
            ans = std::max(ans,sum);
            sum = std::max(0,sum);
        }
        return ans;
    }
};
