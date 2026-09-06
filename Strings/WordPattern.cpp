class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        vector<string> v;

        int start = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ' || i == s.size() - 1){
                int len = i - start;
                if(i == s.size() - 1) len = i - start + 1;

                string sub = s.substr(start,len);
                v.push_back(sub);
                start = i + 1;
            }
        }
        if(v.size() != pattern.size())return false;

        for(int i = 0; i < pattern.size(); i++){
            if(mp1.count(pattern[i]) && mp1[pattern[i]] != v[i]) return false;

            if(mp2.count(v[i]) && mp2[v[i]] != pattern[i]) return false;

            mp1[pattern[i]] = v[i];
            mp2[v[i]] = pattern[i];
        }

        return true;
    }
};