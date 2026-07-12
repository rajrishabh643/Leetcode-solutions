class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> mp;
        vector<int> temp = arr;

        sort(temp.begin(), temp.end());
        int rank = 1;

        for(int i = 0; i < temp.size(); i++){
            if(mp.find(temp[i]) == mp.end()){
                mp[temp[i]] = rank;
                rank++;
            }
        }

        for(int i = 0; i < arr.size(); i++){
            auto val = mp.find(arr[i]);
            arr[i] = val->second;
        }

        return arr;
    }
};