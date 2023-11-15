// Given a pair of strings of equal lengths, Geek wants to find the better string.
//The better string is the string having more number of distinct subsequences.
// If both the strings have equal count of distinct subsequence then return str1.

class Solution {
    vector<int> dp;
    
    int help(string s)
    {
        int n = s.length();
        dp.resize(n+1, 0);
        dp[0] = 1; 
        
        unordered_map<char, int> mp;
        for(int i=1; i<=n; i++)
        {
            char ch = s[i-1];
            dp[i] = dp[i-1]*2;
            
            if(mp.find(ch) != mp.end())  dp[i] = dp[i] - dp[mp[ch] - 1];
            
            mp[ch] = i;
        }
        return dp[n];
    }
    
  public:
    string betterString(string str1, string str2) {
          return help(str1)>=help(str2) ? str1 : str2;
    }
};

TC(n)
SC(n)