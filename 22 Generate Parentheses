class Solution {
public:
    vector<string> generateParenthesis(int n) {
        std::vector<std::string> result;
        std::string curr;
        generator(result, curr, n, n);
        return result;
        
    }
private:
    void generator(std::vector<std::string>& result, std::string curr, int left, int right){
        if(left == 0 && right == 0){
            result.push_back(curr);
            return;
        }
        if(left > 0){
            generator(result,curr+"(",left-1,right);
        }
        
        if(right > left){
            generator(result,curr+")",left, right-1);
        }
        
    }
};
