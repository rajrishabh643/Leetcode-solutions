class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> v(26,0);

        int i = 0;
        int maxFreq = 0;
        int ans = 0;

        for(int j = 0; j < s.size(); j++){
            v[s[j] - 'A']++;

            if(v[s[j] - 'A'] > maxFreq){
                maxFreq = v[s[j] - 'A'];
            }

            int windowSize = j - i + 1;
            while(windowSize - maxFreq > k){
                v[s[i] - 'A']--;
                i++;
                windowSize = j - i + 1;
            }

            ans = max(ans,windowSize);
        }
        return ans;
    }
};