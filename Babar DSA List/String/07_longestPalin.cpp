
// Longest Palindrome in a String
// 1 for diagonal is always Palindrome
// 2 check adjacent if palindorme then set 2;
// 3 check if they are equal then check remaining are palindrome which ans are already stored in bottom-left diagonal.
// aaaabbaa
//    a0 a1 a2 a3 b4 b5 a6 a7
// a0 1  2  3  4  0  0  0  0
// a1    1  2  3  0  0  0  0
// a2       1  2  0  0  0  6
// a3          1  0  0  4  0
// b4             1  2  0  0
// b5                1  0  0
// a6                   1  2
// a7                      1

// max length=6 from 2-7.
// ans = aabbaa

//dp
class Solution {
  public:
    string longestPalin (string s) {
        string ans="";
        int n=s.length();
        vector<vector<int>> dp(n,vector<int>(n,0));
        int max=0;
        for(int gap=0;gap<n;gap++){
            for(int i=0,j=gap;j<n;i++,j++){
                if(gap==0){
                    dp[i][j]=1;
                }else if(gap==1){
                    if(s[i]==s[j]){
                        dp[i][j]=2;
                    }
                }else{
                   if(s[i]==s[j]&&dp[i+1][j-1]){
                       dp[i][j]=dp[i+1][j-1]+2;
                   }   
                }
                if(dp[i][j]>max){
                    max=dp[i][j];
                    ans=s.substr(i,dp[i][j]);
                }
            }
        }
        
        return ans;
    }
};
TC(n*n)
SC(n*n)

//optimize solution
//from every point move left and right to check it is palindrome.
class Solution {
  public:
    string longestPalin (string S) {
        string ans="";
        int max=0;
        for(int i=0;i<S.length();i++){
            string temp=maxPalindrome(S,i,i);
            if(temp.length()>max){
                ans=temp;
                max=temp.length();
            }
            temp=maxPalindrome(S,i,i+1);
            if(temp.length()>max){
                ans=temp;
                max=temp.length();
            }
        }
        return ans;
    }
    
    string maxPalindrome(string s,int i,int j){
        while(i>=0&&j<s.length()&&s[i]==s[j]){
           i--;j++;
        }
        return s.substr(i+1,j-i-1);
    }
};