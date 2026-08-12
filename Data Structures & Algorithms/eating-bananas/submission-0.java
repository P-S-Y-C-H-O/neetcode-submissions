class Solution {
    private boolean check(int [] piles,int h,int k){
        for(int i : piles){
            if(i<=k)h--;
            else {
                if(i%k==0)h-=i/k;
                else h-=i/k+1;
            }
            if(h<0)return false;
        }
        return true;
    }
    public int minEatingSpeed(int[] piles, int h) {
        int l=1,r=1;
        for(int x : piles){
            r=Math.max(r,x);
        }
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(piles,h,mid)){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
}
