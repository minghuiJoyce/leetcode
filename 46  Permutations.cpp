class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        std::vector<bool> visited(nums.size(),false); //note the use of vector constructor,no "=" sign
        std::vector<std::vector<int> > result;
        std::vector<int> currVec;
        generatePermu(nums,result,currVec,nums.size(),visited);
        return result;
    }
    
private:
    void generatePermu(std::vector<int>& nums, std::vector<std::vector<int> >& result,std::vector<int>& currVec,int n,std::vector<bool>& visited){
        if(currVec.size() == n){
            result.push_back(currVec);
            return;
        }
        for(int i = 0;i<nums.size();i++){
            if(visited[i] == true){continue;}
            currVec.push_back(nums[i]);
            visited[i] = true;
            generatePermu(nums,result,currVec,n,visited);
            currVec.pop_back();
            visited[i] = false;
        }
    }
    
};
