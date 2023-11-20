// Count the Reversals

class Solution{
   public:
    int countRev (string s)
    {
        int open=0,close=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{'){
                open++;
            }else if(s[i]=='}'){
                if(open==0){
                    open++;
                    ans++;
                }else{
                    open--;
                }
            }
        }
            if(open%2!=0) return -1;
            ans+=(open/2);
            return ans;
    }
};