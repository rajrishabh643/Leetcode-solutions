class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> basket;

        int i = 0;
        int j = 0;
        int maxLen = 0;

        while(j < fruits.size()){

            basket[fruits[j]]++;

            while(basket.size() > 2){
                basket[fruits[i]]--;
                if(basket[fruits[i]] == 0) basket.erase(fruits[i]);
                i++;
            }

            maxLen = max(maxLen,j - i + 1);

            j++;
        }

        return maxLen;
    }
};