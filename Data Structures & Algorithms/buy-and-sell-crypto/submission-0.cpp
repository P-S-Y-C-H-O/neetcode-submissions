class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++){
            ans=max(ans,prices[i]-low);
            low=min(low,prices[i]);
        }
        return ans;
    }
};
