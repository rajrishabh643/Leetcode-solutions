class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need; // frequency of t
        unordered_map<char, int>window; // frequency of s

        for(auto ch: t){
            need[ch]++;
        }
        int i = 0;
        int formed = 0;
        int required = need.size();
        int start = 0;
        int len = INT_MAX;

        for(int j = 0; j < s.size(); j++){
            window[s[j]]++;

            if(need.count(s[j]) && window[s[j]] == need[s[j]]){
                formed++;
            }

            while(formed == required){
                int currlen = j - i + 1;
                if(currlen < len){
                    len = currlen;
                    start = i;
                }
                

                window[s[i]]--;

                if(need.count(s[i]) && window[s[i]] < need[s[i]]){
                    formed--;
                }

                i++;
            }
        }

        if(len == INT_MAX) return "";
        
        return s.substr(start,len);
    }
};