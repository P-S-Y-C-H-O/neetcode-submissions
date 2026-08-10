class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(auto &i : s){
            if(i>='A' && i<='Z' || i>='a' && i<='z' || i>='0' && i<='9'){
                str+=tolower(i);
            }
        }
        int n=str.size();
        int l=0,r=n-1;
        while(l<r){
            if(str[l]!=str[r])return false;
            l++;r--;
        }
        return true;
    }
};
