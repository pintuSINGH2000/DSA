// Word Break

// divide string from index and check it present in set then similary for every substring 
class Solution
{
public:
    int wordBreak(string A, vector<string> &B) {
        set<string> b;
        for(auto aa:B){
            b.insert(aa);
        }
        map<string,bool> dp;
        return solve(A,b,dp);
    }
    
    int solve(string a,set<string> &b,map<string,bool> &dp){
        if(a.empty()) return true;
        if(dp.find(a)!=dp.end()) return dp[a];
        
        bool temp=false;
        for(int i=0;i<a.length();i++){
            if(b.find(a.substr(0,i+1))!=b.end()){
                temp=(temp||solve(a.substr(i+1),b,dp));
            }
        }
        dp[a]=temp;
        return temp;
    }
};

Tc(n*n+m log(m))  n=a.length() & m=b.length;
SC(n)

// iterative approach
class Solution
{
public:
    int wordBreak(string a, vector<string> &B) {
        unordered_set<string> b;
        int n=a.length();
        for(auto aa:B){
            b.insert(aa);
        }
        unordered_map<string,bool> dp;
        dp[""]=true;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(dp[a.substr(0,i)]&&b.find(a.substr(i,j-i+1))!=b.end()){
                    dp[a.substr(0,j+1)]=true;
                }
            }
        }
        return dp[a];
    }
};