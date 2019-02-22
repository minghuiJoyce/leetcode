//backtracing solution

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<int> subvec;
        std::vector<vector<int> >result;
        result.push_back(subvec);
        int index = 0;
        generate(nums,index,subvec,result);
        return result;
        
    }
    
    void generate(std::vector<int>& nums, int i, std::vector<int>& subvec,std::vector<std::vector<int> >& result){
        if(i>=nums.size()&&i>=0){
            return;
        }
        subvec.push_back(nums[i]);
        result.push_back(subvec);
        generate(nums,i+1,subvec,result);
        subvec.pop_back();
        generate(nums,i+1,subvec,result);
    }
    
    
};



//Bit-shift solution
/*
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<std::vector<int> > result;
        
        for(int i = 0;i<(1<<nums.size());i++){//count 000,001,010,011...111
            std::vector<int> subvec;
            for(int j = 0;j<nums.size();j++){
                //if select nums[0],001(i)&001(1<<j) is 1(true),others are 0
                if(i & (1<<j)){ 
                    subvec.push_back(nums[j]);
                }
            }
            result.push_back(subvec);
        }
        return result;
    }
        
};

*/
