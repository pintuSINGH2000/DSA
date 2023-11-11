// Count and Say

class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        for(int i=2;i<=n;i++){
          string p="";
          int count=1;
          for(int j=1;j<s.length();j++){
             if(s[j]!=s[j-1]){
               p+=to_string(count)+s[j-1];
               count=1;
             }else{
                count++;
             }
          }
            p+=to_string(count)+s[s.length()-1];
            s=p;
        }
        return s;
    }
};

TC(n*m)//m=maxlength of stirng.
SC(m)