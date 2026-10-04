class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(char ch:s){  // basic version ,Linear scan + subtractive-pair correction using find()
            if(ch=='I'){
                ans+=1;
            }
            if(ch=='V'){
                ans+=5;
            }
            if(ch=='X'){
                ans+=10;
            }
            if(ch=='L'){
                ans+=50;
            }
            if(ch=='C'){
                ans+=100;
            }
            if(ch=='D'){
                ans+=500;
            }
            if(ch=='M'){
                ans+=1000;
            }
        }
         if(s.find("IV")!= string::npos){
                ans-=2;
            }
            if(s.find("IX") != string::npos){
                ans -= 2;
            }
            if(s.find("XL")!= string::npos){
                ans-=20;
            }
            if(s.find("XC")!= string::npos){
                ans-=20;
            }
            if(s.find("CD")!= string::npos){
                ans-=200;
            }
            if(s.find("CM")!= string::npos){
                ans-=200;
            }
        return ans;
    }
};