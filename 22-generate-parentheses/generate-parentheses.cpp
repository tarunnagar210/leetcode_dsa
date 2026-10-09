class Solution {
public:
    void genrate(int open,int close,int n,string s,vector<string>& ans){
        if(s.length()==2*n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            genrate(open+1,close,n,s+'(',ans);
        }
        if(open>close){
            genrate(open,close+1,n,s+')',ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        genrate(0,0,n,"",ans);
        return ans;
    }
};