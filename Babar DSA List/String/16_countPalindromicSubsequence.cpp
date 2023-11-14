// Unique Length-3 Palindromic Subsequences

// Given a string s, return the number of unique palindromes of length three that are a subsequence of s.

// Note that even if there are multiple ways to obtain the same subsequence, it is still only counted once.

// A palindrome is a string that reads the same forwards and backwards.

// A subsequence of a string is a new string generated from the original string with some characters (can be none)
//  deleted without changing the relative order of the remaining characters.


// For example, "ace" is a subsequence of "abcde".

//for 3 length palindrome two char muct be smae 
//so find two index one small and other large.
//inbetween you have to find unique element
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> maxArr(26,INT_MIN);
        vector<int> minArr(26,INT_MAX);

        for(int i=0;i<s.size();i++){
            int a=s[i]-'a';
            maxArr[a]=max(maxArr[a],i);
            minArr[a]=min(minArr[a],i);
        }

        int ans=0;
        for(int i=0;i<26;i++){
            if(maxArr[i]==INT_MIN||minArr[i]==INT_MAX) continue;
            set<char> unique;

            for(int j=minArr[i]+1;j<maxArr[i];j++){
                unique.insert(s[j]);
            }
            
            ans+=unique.size();
        }
        return ans;
    }
};