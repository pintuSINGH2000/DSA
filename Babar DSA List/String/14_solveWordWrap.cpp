// Word Wrap
// Given an array nums[] of size n, where nums[i] denotes the number of characters in one word. Let K be the limit on the number of characters that can be put in one line (line width). Put line breaks in the given sequence such that the lines are printed neatly.
// Assume that the length of each word is smaller than the line width. When line breaks are inserted there is a possibility that extra spaces are present in each line. The extra spaces include spaces put at the end of every line except the last one. 

// You have to minimize the following total cost where total cost = Sum of cost of all lines, where cost of line is = (Number of extra spaces in the line)2.

//calculate remaining length after adding to word
// use take or not take strategy
//if remlength > then current word length then we have to choise take or not else not take 

recursive+memoization
class Solution {
public:
    int solveWordWrap(vector<int>nums, int k) 
    { 
        vector<vector<int>> dp(nums.size(),vector<int>(k,-1));
        return solve(nums,0,0,k,dp);
    } 
    int solve(vector<int> nums,int i,int remlength,int k,vector<vector<int>>& dp){
        if(i==nums.size()-1){
            if(nums[i]<remlength){
               return dp[i][remlength]=0;
            }else{
               return dp[i][remlength]=(remlength*remlength);
            }
        }
        if(dp[i][remlength]!=-1) return dp[i][remlength];
        if(nums[i]<remlength){
            //if current line is empty then sub only word length else we have to subtract one space extra for space between word
            int temp=remlength==k?remlength-nums[i]:remlength-nums[i]-1;
            return dp[i][remlength]=min(solve(nums,i+1,temp,k,dp),(remlength*remlength)+solve(nums,i+1,k-nums[i],k,dp));
        }else{
            return dp[i][remlength]=remlength*remlength+solve(nums,i+1,k-nums[i],k,dp);
        }
    }
};

TC(n*k)
TC(n*k)