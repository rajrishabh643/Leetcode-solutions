class Solution {
public:
    bool check(char ch){
        return(ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u');
    }

    int maxVowels(string s, int k) {
        int count = 0;
        int ans = 0;
        int i = 0;
        int j = 0;

        while(j < k){
            if(check(s[j]))count++;
            j++;
        }
        ans = max(count,ans);
        while(j < s.size()){
            if(check(s[j])) count++;

            if(check(s[i])){
                count--;
            }
            i++;

            ans = max(count,ans);
            j++;
        }

        return ans;
    }
};