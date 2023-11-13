// Number of distinct subsequences

//abcd
//"" 1
//"" a  a=2
//"" a ab b b=4
//"" a ab b c ac abc bc c=8
//"" a ab b c ac abc bc d ad abd bd cd acd abcd bcd  d=16
// when all occurrence is unique then we simply multiply by 2 to previous ans.

//aba
//"" 1 
//"" a 2
//"" a ab b 4
//"" a ab b aa aab ba 7 //here we have to subtract all count prev than last occurrence of a

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    unordered_map<char,long long> map;
	    long long ans=1;
	    long long mod=1e9+7;
	    for(int i=0;i<s.length();i++){
	        long long temp=ans;
	        ans=(ans*2)%mod;
	        if(map.find(s[i])!=map.end()){
	            ans=(ans-map[s[i]]+mod)%mod;
	        }
	        map[s[i]]=temp;
	    }
	    return (int)(ans%mod);
	}
};

TC(n)
SC(n)