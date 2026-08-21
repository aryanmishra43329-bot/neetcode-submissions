class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int sum=accumulate(piles.begin(),piles.end(),0);
        int low=min(1,sum/h);
        long long high=*max_element(piles.begin(),piles.end());
        long long ans=high;
        if(piles.size()==1 && h>piles[0]){
            return 1;
        }
        while(low<=high){
            long long middle=low+(high-low)/2;
            long long  c=0;
            for(int i=0;i<n;i++){
                if(middle>=piles[i]){
                    c++;
                }else{
                    c = c+(piles[i]+middle-1)/middle;
                }
            }
            if(c>h){
                low=middle+1;
            }
            if(c<=h){
                ans=middle;
                ans=min(ans,middle);
                high=middle-1;
            }
        }
        return ans;
    }
};
