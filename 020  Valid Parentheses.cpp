class Solution {
public:
    bool isValid(string s) {
        std::stack<char> mystack;
        int n = s.size();
        for(int i = 0;i<n;i++){
            if(s[i] =='(' || s[i] =='['|| s[i] =='{'){
                mystack.push(s[i]);
            }
            if(s[i] ==')'){
                if(mystack.empty() || mystack.top() != '('){
                    return false;
                }
                else{mystack.pop();}
            }
            else if(s[i] ==']'){
                if(mystack.empty() ||  mystack.top() != '['){
                    return false;
                }
                else{mystack.pop();}                
            }
            else if(s[i] =='}'){
                if(mystack.empty() || mystack.top() != '{'){
                    return false;
                }
                else{mystack.pop();}       
            }
        }
        if(mystack.size() == 0){
            return true;
        }
        return false;
    }
};
