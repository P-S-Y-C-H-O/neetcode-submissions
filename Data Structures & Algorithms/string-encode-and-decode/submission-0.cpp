class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto &i : strs){
            ans+=to_string(i.size())+'#'+i;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>v;
        int i=0;
        while(i<s.size()){
            int k=i;
            while(s[k]!='#')k++;
            int len = stoi(s.substr(i, k - i));
            k++;
            string word = s.substr(k, len);
            v.push_back(word);
            i=k+len;
        }
        return v;
    }
};
