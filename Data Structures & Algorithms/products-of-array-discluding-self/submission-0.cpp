class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int res = 1, c = 0, k;
        vector<int> a(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                c++;
            }
            res *= nums[i];
        }
        if (c > 1) {
            return a;
        }
        if (c == 1) {
            int prod=1;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0) {
                    k = i;
                    continue;
                }else{
                    prod *= nums[i];
                }
            }
            a[k]=prod;
            return a;
        }
        for (int i = 0; i < nums.size(); i++) {
            int ans = res / nums[i];
            a[i] = ans;
        }
        return a;
    }
};
