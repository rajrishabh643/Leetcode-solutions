class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_sum = 0;
        int cur_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1) cur_sum++;
            if(cur_sum > max_sum) max_sum = cur_sum;
            if(nums[i] == 0)cur_sum = 0;
        }
        return max_sum;
    }
};