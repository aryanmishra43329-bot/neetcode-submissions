class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[position[i]]=speed[i];
        }
        vector<pair<int,int>>sorted(mp.begin(),mp.end());
        sort(sorted.begin(),sorted.end(),[](const auto& a, const auto& b){return a.first > b.first;});
        vector<double>time_taken;
        for(const auto& pair:sorted){
            double f=(double)(target-pair.first)/pair.second;
            time_taken.push_back(f);
        }
        stack<double>st;
        for(int i=0;i<time_taken.size();i++){
            if(st.empty() || st.top()<time_taken[i]){
                st.push(time_taken[i]);
            }
        }
        return st.size();
    }
};