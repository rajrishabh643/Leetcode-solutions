class Solution {
public:
    bool isVowel(char a){
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') return true;

        if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') return true;

        return false;
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j){
            if(!isVowel(s[i])){
                i++;
            }else if(!isVowel(s[j])){
                j--;
            }
            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};