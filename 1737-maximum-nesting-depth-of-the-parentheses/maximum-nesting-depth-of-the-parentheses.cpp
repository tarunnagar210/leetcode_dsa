class Solution {
public:
    int maxDepth(string s) {
       int count=0;
       int maximum=0;
        for(char ch:s){
            if(ch=='('){
                count++;
                maximum=max(maximum,count);
            }else if (ch == ')'){
                count--;
            }
        }
        return maximum; 
    }
};