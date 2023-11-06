// Factorials of large numbers
//calcuate factorial by multiplying every element from 2-n to the multiplication of previous element present in list

class Solution {
    
public:
    vector<int> factorial(int N){
       vector<int> ans={1};
       for(int i=2;i<=N;i++){
           multiply(ans,i);
       }
       return ans;
    }
    void multiply(vector<int>& ans,int x){
        int carry=0;

        for(int i=ans.size()-1;i>=0;i--){
            int prod=ans[i]*x+carry;
            ans[i]= prod%10;
            carry=prod/10;
        }
        while(carry){
             ans.insert(ans.begin(),carry%10);
            carry/=10;
        }
    }
};

TC(n*k) k=length of digit
SC(k)