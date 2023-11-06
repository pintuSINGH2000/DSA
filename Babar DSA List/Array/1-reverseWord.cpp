class Solution
{
    public:
    string reverseWord(string str)
    {
        int i=0,j=str.length()-1;
        while(i<j){
            char c=str[i];
            str[i]=str[j];
            str[j]=c;
            i++;
            j--;
        }
        return str;
    }
};

TC(n/2)
SC(1)
