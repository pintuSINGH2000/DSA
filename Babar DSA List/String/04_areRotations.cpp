// Check if strings are rotations of each other or not

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1.length()!=s2.length()) return false;
        s1=s1+s1;
        int t1=s1.find(s2);
        return (t1>=0); 
    }
};
TC(n)
SC(n)