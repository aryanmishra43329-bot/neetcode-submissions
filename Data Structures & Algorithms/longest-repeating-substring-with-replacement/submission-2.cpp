class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int i=0,d=0,ans=0,maxfreq=0;
        unordered_map<char,int>m;
        for(int j=0;j<n;j++){
            m[s[j]]++;
            maxfreq=max(maxfreq,m[s[j]]);
            while((j-i+1)-maxfreq>k){
                m[s[i]]--;
                i++;   
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};