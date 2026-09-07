class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;

        int l = 0;
        int r = 0;
        int maxLen = 0;

        while(r < s.size()){
            if(st.find(s[r]) == st.end()){
                st.insert(s[r]);
                r++;
            }else{
                st.erase(s[l]);
                l++;
            }

            int len = r - l;
            maxLen = max(subStringlen, len);
        }

        return maxLen;
    }
};