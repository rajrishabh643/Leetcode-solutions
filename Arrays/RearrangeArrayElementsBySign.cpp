class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos; 
        vector<int> neg;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int i = 0;
        int j = 0;

        for(int k = 0; k < nums.size(); k++){
            if((k % 2) == 0){
                nums[k] = pos[i];
                i++;
            }else{
                nums[k] = neg[j];
                j++;
            }
        }

        return nums;
    }
};