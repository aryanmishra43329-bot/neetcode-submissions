class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        vector<int> a;
        vector<vector<int>> b;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] - nums[i] == 1) {
                a.push_back(nums[i]);
            } else {
                a.push_back(nums[i + 1]);
                if (a.size() > 0) {
                    b.push_back(a);
                    a.clear();
                }
            }
        }
        int n=nums.size();
        a.push_back(nums[n-1]);
        b.push_back(a);
        int mx = -1;
        for (int i = 0; i < b.size(); i++) {
            int c = b[i].size();
            mx = max(c, mx);
        }
        return mx;
    }
};