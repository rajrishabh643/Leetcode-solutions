class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;
        int num;

        for(int i = n-2; i >= 0; i--)
        {
            if(nums[i] < nums[i+1]){
                index = i;
                num = nums[i];
                break;
            }
        }

        if(index == -1)
        {
            reverse(nums.begin(),nums.end());
        }
        else{
            for(int i = n-1; i >= index; i--){

                if(nums[i] > num)
                {
                    swap(nums[index],nums[i]);
                    break;
                }
            }

            auto it = nums.begin();
            reverse(it + index + 1,it + n);
        }

    }
};