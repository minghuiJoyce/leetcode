class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        std::vector<std::vector<int> > result;
        std::vector<int> currVec;
        std::vector<bool> visited(nums.size(),false);
        permuteHelper(nums,nums.size(),currVec,visited,result);
        return result;
    
    }
private:
    void permuteHelper(std::vector<int>& nums,int n,std::vector<int>& currVec,std::vector<bool>& visited,std::vector<std::vector<int>>& result){
        if(currVec.size()==n){
            result.push_back(currVec);
            return;
        }
        int prevNum = nums[0]-1;
        for(int i = 0;i<nums.size();i++){
            if(visited[i]){continue;}
            if(nums[i] == prevNum){continue;}
            visited[i] = true;
            prevNum = nums[i];
            currVec.push_back(nums[i]);
            permuteHelper(nums,n,currVec,visited,result);
            visited[i] = false;
            currVec.pop_back();
        }
    }
};
