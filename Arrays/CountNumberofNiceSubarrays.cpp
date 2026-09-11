class Solution {
public:
    int func(vector<int>& nums, int k){
        int l = 0;
        int r = 0;
        int sum = 0;
        int count = 0;
        
        while(r < nums.size()){
            sum += nums[r];

            while(sum > k){
                sum -= nums[l];
                l++;
            }
            count += r - l + 1;
            r++;
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                nums[i] = 0;
            }
            else{
                nums[i] = 1;
            }
        }

        return func(nums, k) - func(nums, k -1);
    }
};