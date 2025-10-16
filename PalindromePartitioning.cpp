class Solution {
public:
   bool palidrome(int start, int end, string s){
    while(start<=end){
        if(s[start]!= s[end])
        return false;
        start++;
        end--;
    }
    return true;
   }
    void solve(string s, vector<vector<string>> &ans, vector<string> &str, int i ){
        if(i==s.size()){
            ans.push_back(str);
            return;
        }
        for(int j =i;j<s.size();j++){
            if(palidrome(i,j,s)){
                 str.push_back(s.substr(i,j-i+1));
                 solve(s,ans,str,j+1);
                 str.pop_back();
            }
            
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> str;
        solve(s,ans,str,0);
        return ans;
    }
};
