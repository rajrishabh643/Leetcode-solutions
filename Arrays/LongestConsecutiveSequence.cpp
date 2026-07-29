class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        for(int i: nums)
        {
            st.insert(i);
        }

        if(st.empty())return 0;
        
        int longest = 1;
        for(int i: st)
        {
            int current = i;
            int length = 1;

            if(st.find(current - 1) == st.end())
            {
                while(st.find(current+1) != st.end()){
                    current = current + 1;
                    length++;
                }
            }
            longest = max(longest,length);
        }
        return longest;
    }
};