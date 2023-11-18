// Pattern Searching || Search Pattern


class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            int n=txt.length();
            int m=pat.length();
            vector<int> v;
            for(int i=0;i<n-m+1;i++){
                if(txt.substr(i,m).compare(pat)==0){
                    v.push_back(i+1);
                }
            }
            if(v.empty()) v.push_back(-1);
            return v;
        }
     
};

TC(nm);
SC(1)

//Rabin karp algorithm
class Solution
{
    int prime = 101;
    public:
        vector <int> search(string pat, string txt)
        {
            int n=txt.length();
            int m=pat.length();
            long txtHash=calculateHash(txt.substr(0,m));
            long patHash=calculateHash(pat);
            
            vector<int> v;
            for(int i=0;i<=n-m;i++){
                if(txtHash==patHash){
                  if(txt.substr(i,pat.length()).compare(pat)==0){
                     v.push_back(i+1);
                  }
                }
                if(i<n-m){
                txtHash=updateHash(m,txt[i],txt[i+m],txtHash);
               }
            }
            if(v.empty()) v.push_back(-1);
            return v;
        }
        
        long updateHash(int length,char prevChar,char nextChar,double hash){
            long newHash=(hash-prevChar)/prime;
            newHash = newHash+nextChar*pow(prime,length-1);
            return newHash;
        }
        long calculateHash(string s){
            long ans=0,n=s.length();
            for(int i=0;i<n;i++){
                ans+=(s[i]*pow(prime, i));
            }
            return ans;
        }
     
};

TC(n*m) //when more collison occur
SC(1)
