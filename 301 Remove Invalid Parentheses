class Solution {
public:
        //isvalid
        //count '('  ')' # to be removed
        //removeHelper
    bool isValid(string s){
        int pair = 0;
        for(char c: s){
            if(c=='('){
                pair++;
            }
            if(c==')'){
                pair--;
                if(pair<0){
                    return false;
                }
            }
        }
        if(pair==0){
            return true;
        }
        return false;
        
    }
    void removeHelper(vector<string>& ans, string s, int start, int left, int right){
        if(left == 0 && right == 0){
            if(isValid(s)){
                ans.push_back(s);
            }
            return;
        }
        int length = s.size();
        for(int i = start;i<length;i++){
            if(i>start && s[i] == s[i-1]){
                continue;
            }
            if(right > 0 && s[i] == ')'){
                removeHelper(ans, s.substr(0,i)+s.substr(i+1), i, left, right-1);
            }
            if(left>0 && s[i] == '('){
                removeHelper(ans, s.substr(0,i)+s.substr(i+1), i, left-1, right);
            }
        }        
    }
    
    vector<string> removeInvalidParentheses(string s) {
        //count '('  ')' # to be removed
        int left = 0;
        int right = 0;
        for(char c:s){
            if(c=='('){
                left++;
            }
            if(left>0){
                left -= (c==')');
            }
            else{
                right += (c==')');
            }
        }
        vector<string> ans;
        removeHelper(ans, s, 0, left, right);
        
        return ans;
    }
};
