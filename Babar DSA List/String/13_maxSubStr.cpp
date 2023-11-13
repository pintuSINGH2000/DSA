// Split the binary string into substrings with equal number of 0s and 1s

// intitution
// when zero and one are equal then we can split so when zero we can increase count and when one we can decrease count 

class Solution {
public:
    int maxSubStr(string str){
        int zero=0;
        int sub_str=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='0') zero++;
            else zero--;
            if(zero==0){
                sub_str++;
            } 
        }
        return zero==0?sub_str:-1;
    }
};

TC(n)
SC(1)