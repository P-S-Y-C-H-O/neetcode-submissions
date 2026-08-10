class Solution {
public:
    bool check(char c1,char c2){
        if(c1==')' && c2=='(' || c1==']' && c2=='[' || c1=='}' && c2=='{')return true;
        return false;
    }
    bool isValid(string s) {
        stack<char>st;
        for(auto &i : s){
            if(i==')' || i==']' || i=='}'){
                if(st.empty())return false;
                if(!check(i,st.top()))return false;
                st.pop();
            }
            else st.push(i);
        }
        return st.empty();
    }
};
