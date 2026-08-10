class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int ans=0;
        int l=0,r=0;
        while(r<s.size()){
            if(mp.contains(s[r])){
                if(mp[s[r]]>=l)
                l=mp[s[r]]+1;
            }
            ans=max(ans,r-l+1);
            mp[s[r]]=r;
            r++;
        }
        return ans;
    }
};
