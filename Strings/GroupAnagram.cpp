class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(int i = 0; i < strs.size(); i++){
            int j = 0;
            vector<int> v(26,0);

            while(j < strs[i].size()){
                v[strs[i][j] - 'a']++;
                j++;
            }   
            string val = "";

            for(int i = 0; i < 26; i++){
                val += to_string(v[i]) + " ";
            }
            mp[val].push_back(strs[i]);
        }      
        vector<vector<string>> ans;
        
        for(auto x: mp){
            ans.push_back(x.second);
        }

        return ans;
    }
};