// Permutation Coefficient

// P(n, k) = P(n-1, k) + k* P(n-1, k-1)

class Solution{
    long long mod=1000000007;
    public:
    int permutationCoeff(int n, int k) 
    { 
        int fact[n + 1]; 
    
        fact[0] = 1; 
        for(int i = 1; i <= n; i++) 
        fact[i] = i * fact[i - 1]; 
    
        return fact[n] / fact[n - k]; 
    } 
    
};

class Solution{
    long long mod=1000000007;
    public:
    int permutationCoeff(int n, int k) 
    { 
        int fact[n + 1]; 
    
        fact[0] = 1; 
        for(int i = 1; i <= n; i++) 
        fact[i] = i * fact[i - 1]; 
    
        return fact[n] / fact[n - k]; 
    } 
    
};

TC(n)
SC(1)