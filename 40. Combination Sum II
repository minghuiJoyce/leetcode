class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int index = 0;
        std::vector<std::vector<int> > res;
        std::vector<int> subvec;
        std::sort(candidates.begin(),candidates.end());
        generateCombination(candidates,target,index,subvec,res);
        return res;
    }
    
private:
    void generateCombination(vector<int>& candidates, int currTar, int startI, std::vector<int>& currVec, std::vector<std::vector<int> >& result){
        if(currTar == 0){
            result.push_back(currVec);
            return;
        }
        for(int i = startI;i<candidates.size();i++){
            if(candidates[i]>currTar){
                break;
            }
            //duplication arise in using the same element at different places in cadidates
            if(i>startI && candidates[i] == candidates[i-1]){continue;} //remove duplicate: startI also means the depth of recursion tree, where in the same frame, you push [i] and (long time after) pop [i] then try [i+1]. 
            currVec.push_back(candidates[i]);
            generateCombination(candidates,currTar-candidates[i],i+1,currVec,result);
            currVec.pop_back();
            
        }
    }
    
    
};
