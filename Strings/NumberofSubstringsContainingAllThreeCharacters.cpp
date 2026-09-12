class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> v(3,0);

        int count = 0;
        int i = 0;
        for(int j = 0; j < s.size(); j++){
            v[s[j] - 'a']++;

            while(v[0] > 0 && v[1] > 0 && v[2] > 0){
                v[s[i] - 'a']--;
                i++;
            }
            count += i;
        }

        return count;
    }
};