class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int sum = 0;
        double ans = INT_MIN;

        while(j < k){
            sum += nums[j];
            j++;
        }

        ans = max(ans, (double)sum);

        while(j < nums.size()){
            sum += nums[j];
            sum -= nums[i];
            j++;
            i++;

            ans = max(ans, (double)sum);
        }

        return ans/k;
    }
};