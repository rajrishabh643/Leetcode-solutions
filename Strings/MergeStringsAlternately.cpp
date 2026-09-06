class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        merged.reserve(word1.size() + word2.size());

        int i = 0;
        int j = 0;

        while(i < word1.size() || j < word2.size()){

            if(i < word1.size()){
                merged.push_back(word1[i]);
                i++;
            }

            if(j < word2.size()){
                merged.push_back(word2[j]);
                j++;
            }
        }

        return merged;
    }
};