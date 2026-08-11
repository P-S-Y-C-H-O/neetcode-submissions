class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        for(auto &i : nums){
            if(st.contains(i-1))continue; 
            int curr=i,cnt=0;
            while(st.contains(curr)){
                cnt++;
                curr++;
            }
            ans=max(ans,cnt);
            cnt=0;
        }
        return ans;
    }
};
