


// Convert a sentence into its equivalent mobile numeric keypad sequence

class Solution{

    public:
    string printSequence(string S)
    {
        unordered_map<string, string> mp;
        mp[""]="1";
        mp["A"]="2";
        mp["B"]="22";
        mp["C"]="222";
        mp["D"]="3";
        mp["E"]="33"; 
        mp["F"]="333";
        mp["G"]="4";
        mp["H"]="44";
        mp["I"]="444";
        mp["J"]="5";
        mp["K"]="55";
        mp["L"]="555";
        mp["M"]="6";
        mp["N"]="66";
        mp["O"]="666";
        mp["P"]="7";
        mp["Q"]="77";
        mp["R"]="777";
        mp["S"]="7777";
        mp["T"]="8";
        mp["U"]="88";
        mp["V"]="888";
        mp["W"]="9";
        mp["X"]="99";
        mp["Y"]="999";
        mp["Z"]="9999";
        mp[" "]="0";
        mp["*"]="*";
        mp["#"]="#";

        
        string ans="";
        for(int i=0;i<S.length();i++){
            ans+=mp[string(1, S[i])];
        }
        return ans;
    }
}

TC(N)
SC(1)
3
    int maximumXorProduct(long long a, long long b, int n) {
        ll x,y;
        rap(i,n-1,0){
            if(a>b)swap(a,b);
            x = (a>>i)&1;
            y = (b>>i)&1;
            if(!x){
                a^= 1ll<<i;
                b^= 1ll<<i;
            }
        }
        return (a%MOD) * (b%MOD) % MOD;
    }
4
    vi x;
int n;

struct segtree{
    int tree[1<<18];
    int n,a,b,val;
    void build(int id,int le,int ri){
        if(le==ri){
            tree[id] = x[le-1];
            return;
        }
        int mid = (le+ri)>>1;
        build(lc,le,mid), build(rc,mid+1,ri);
        tree[id] = max(tree[lc], tree[rc]);
        return;
    }
    int que(int id,int le,int ri){
        if(tree[id]<=val)return 0;
        if(le==ri)return le;
        int mid = (le+ri)>>1;
        if(a<=mid){
            int t1 = que(lc,le,mid);
            if(t1)return t1;
        }
        return que(rc,mid+1,ri);
    }
    int que(int l,int v){
        a = l, b = n;
        val = v;
        return que(1,1,n);
    }
}tree;

class Solution {
public:
    vector<int> leftmostBuildingQueries(vector<int>& h, vector<vector<int>>& queries) {
        x = h;
        n = x.size();
        tree.n = n;
        tree.build(1,1,n);
        vi ans;
        int a,b;
        for(auto &i:queries){
            a = i[0], b = i[1];
            if(a>b)swap(a,b);
            if(a==b)ans.pb(a);
            else if(h[a]<h[b])ans.pb(b);
            else {
                a = tree.que(b+1, h[a]);
                ans.pb(a-1);
            }
        }
        return ans;
    }
};