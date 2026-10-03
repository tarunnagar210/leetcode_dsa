class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m) return false;
        int need[26]={0};
        int window[26]={0};
        for(int i=0;i<n;i++){
            need[s1[i]-'a']++;
            window[s2[i]-'a']++;
        }
        int same=0;
        for(int i=0;i<26;i++){
            if(need[i]==window[i]) same++;
        }
            if (same==26) return true;
        for(int i=n;i<m;i++){
            int add=s2[i]-'a';
            int remove=s2[i-n]-'a';

            window[add]++;
            if(window[add]==need[add]) same++;
            else if(window[add]==need[add]+1) same--;

            window[remove]--;
            if(window[remove]==need[remove]) same++;
            else if(window[remove]==need[remove]-1) same--;

            if(same==26) return true;
        }
        return false;
    
    }
};