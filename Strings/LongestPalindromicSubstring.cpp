class Solution {
public:
    int expand(string& s, int l, int r){
        while(l >= 0 && r < s.size() && s[l] == s[r]){
            l--;
            r++;
        }
        return r - l - 1;
    }
    string longestPalindrome(string s) {

        int start = 0;
        int maxLen = 0;

        for(int i = 0; i < s.size(); i++){

            int len = expand(s,i,i);

            if(len > maxLen){
                start = i - len/2;
                maxLen = len;
            }

            len = expand(s,i,i+1);
            if(len > maxLen){ 
                start = i + 1 - len/2;
                maxLen = len;
            }
        }
        string ans = s.substr(start, maxLen);

        return ans;
    }
};