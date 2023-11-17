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
