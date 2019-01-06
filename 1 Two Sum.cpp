//Second time
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> numMap;
        for(int i = 0;i<nums.size();i++){
            numMap[nums[i]] = i;//key: element in the array  value:its index
        }

        
        for(size_t i = 0;i<nums.size();i++){
            int toFind = target-nums[i];
            unordered_map<int,int>::iterator it = numMap.find(toFind);
            if(it != numMap.end() && it->second != i){
                ans.push_back(i);
                ans.push_back(it->second);
                return ans;
            }
        }
        return ans;
    }
};



//first time 

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(size_t i = 0;i<nums.size();i++){
            int first = nums[i];
            for(size_t j = i+1;j<nums.size();j++){
                if(nums[j] == target-first){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;

            
            
        }

};

*/
