class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        std::vector<std::vector<int> > result;
        std::vector<int> subvec;
        int index = 0;
        std::sort(candidates.begin(),candidates.end());
        generateCombination(candidates,target,index,result,subvec);
        return result;
    }
private:
    void generateCombination(vector<int>& candidates, int currTar, int startI, std::vector<std::vector<int> >& result, std::vector<int>& subvec){
            if(currTar == 0){
                result.push_back(subvec);
                return;
            }
            for(int i = startI;i<candidates.size();i++){
                if(candidates[i]>currTar){
                    break;
                }
                subvec.push_back(candidates[i]);
                generateCombination(candidates,currTar-candidates[i],i,result,subvec);
                subvec.pop_back();
            }
        }
};
