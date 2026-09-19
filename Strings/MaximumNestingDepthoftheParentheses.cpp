class Solution {
public:
    int maxDepth(string s) {
        int bracketCount = 0;
        int ans = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                bracketCount++;
            }
            else if(s[i] == ')'){
                bracketCount--;
            }
            ans = max(bracketCount, ans);
        }
        return ans;
    }
};