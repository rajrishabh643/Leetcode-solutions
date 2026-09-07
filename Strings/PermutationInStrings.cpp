class Solution {
public:
    bool check(vector<int> &v1, vector<int> &v2){

        for(int i = 0; i < 26; i++){
            if(v1[i] != v2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26,0);

        for(char s: s1){
            v1[s-'a']++;
        }

        int i = 0;
        int windowSize = s1.size();

        vector<int> v2(26,0);
        while(i < windowSize && i < s2.size()){
            v2[s2[i] - 'a']++;
            i++;
        }

        if(check(v1,v2))return true;

        while(i < s2.size()){
            v2[s2[i] - 'a']++;
            v2[s2[i - windowSize] - 'a']--;
            i++;


            if(check(v1,v2)) return true;

        }
        return false;
    }
};