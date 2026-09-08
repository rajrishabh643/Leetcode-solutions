class Solution {
public:
    bool check(vector<int>& v1, vector<int>& v2){
        for(int i = 0; i < 26; i++){
            if(v1[i] != v2[i]) return false;
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> v1(26,0);
        vector<int> v2(26, 0);

        for(auto ch: p){
            v1[ch - 'a']++;
        }

        int i = 0;
        int windowSize = p.size();


        while(i < windowSize && i < s.size()){
            v2[s[i] - 'a']++;
            i++;
        }

        if(check(v1,v2)) {
            ans.push_back(i - windowSize);
        }
        while(i < s.size()){
            v2[s[i] - 'a']++;
            v2[s[i - windowSize] - 'a']--;
            i++;

            if(check(v1,v2)){
                ans.push_back(i - windowSize);
            }
            
        }

        return ans;
    }
};