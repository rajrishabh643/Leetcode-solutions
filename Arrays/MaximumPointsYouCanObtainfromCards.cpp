class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_pts = 0;
        for(auto i: cardPoints){
            total_pts += i;
        }

        int i = 0;
        int j = 0;
        int sum = 0;
        int ans = 0;
        

        while(j < cardPoints.size() - k){
            sum += cardPoints[j];
            j++;
        }
        ans = max(ans,total_pts-sum);

        while(j < cardPoints.size()){
            sum += cardPoints[j];
            sum -= cardPoints[i];
            j++;
            i++;
            
            ans = max(ans,total_pts-sum);

        }
        return ans;
    }
};