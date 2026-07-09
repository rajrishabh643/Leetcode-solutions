class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(target - nums[i]) != mp.end()) {
                auto val = mp.find(target - nums[i]);

                return {i , val->second};
            }
            else{
                mp[nums[i]] = i;
            }
        }

        return {};
    }
};