class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1,ans=-1;
        while(i<j){
            int a=min(height[i],height[j]);
            int prod=a*(j-i);
            ans=max(ans,prod);
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        return ans;
    }
};