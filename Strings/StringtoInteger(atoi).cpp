class Solution {
public:
    void leadingWhiteSpaces(string &s){
        int i = 0;
        
        while(s[i] == ' '){
            s.erase(i,1);
        }
        
    }

    bool signedness(string& s){
        bool isNegative = false;

        if(s[0] == '-') {
            isNegative = true;
            s.erase(0,1);
            return isNegative;
        }
        else if(s[0] == '+'){
            s.erase(0,1);
        }

        return isNegative;
    }

    int conversion(string& s, bool isNeg){
        int ans = 0;
        int i = 0;

        
        while(i < s.size() && s[i] != ' ' && s[i] >= '0' && s[i] <= '9'){
            if(ans > INT_MAX/10 || ans < INT_MIN/10 || (ans == INT_MAX/10 && s[i] >= '8')){
                if(isNeg){
                    ans = INT_MIN;
                }
                else{
                    ans = INT_MAX;
                }
                break;
            }

            ans = ans * 10 + (s[i] - '0');

            i++;
        }
        
        if(isNeg && ans != INT_MIN) ans = -ans;

        return ans;
    }

    int myAtoi(string s) {
        leadingWhiteSpaces(s);
        bool isNeg = signedness(s);
        int ans = conversion(s, isNeg);
        
        return ans;
    }
};