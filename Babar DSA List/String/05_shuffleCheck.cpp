// Check if a string is a valid shuffle of two distinct strings

class Solution {
    public:
    bool shuffleCheck(string s,string p,string[] shuffles){
        vector<bool> ans;
        sort(s.begin(),s.end());
        sort(p.begin(),p.end());
        for(auto shuffle:shuffles){
            sort(shuffle.begin(),shuffle.end());
           if(s.length()+p.length()==shuffle.length()){
               int i=0,j=0,k=0;
               bool flag=true;
               while(k!=shuffle.length()){
                   if(i<s.length()&&s[i]==shuffle[k]){
                    i++;
                   }else if(j<p.length()&&p[j]==shuffle[k]){
                    j++;
                   }else{
                    ans.push_back(false);
                    flag=false;
                   }
                   k++;
               }
               if(flag) ans.push_back(true);
           }else{
            ans.push_back(false);
           }
        }

    }
};

TC(n*mlogm) //n=shuffles.length & m=length of string in shuffle.
SC()