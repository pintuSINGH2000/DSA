// Same characters in two strings
// Given two strings A and B of equal length
// find how many times the corresponding position in the two strings hold exactly the same character.
// The comparison should not be case sensitive. 


class Solution{
    public:
    int sameChar(string A, string B)
    {
        int i=0,n=A.length(),count=0;
        for(int i=0;i<n;i++){
            if(tolower(A[i])==tolower(B[i])){
                count++;
            }
        }
        return count;
    }
};

TC(n)
SC(1)



