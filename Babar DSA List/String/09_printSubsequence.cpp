// Print all subsequences of a string

class Solution{
    public:
    void printSubsequence(string input, string output)
    {
        if (input.empty()) {
           cout << output << endl;
           return;
        }
        printSubsequence(input.substr(1), output + input[0]);
        printSubsequence(input.substr(1), output);
   }
}

TC(2*n)
SC(n)//recursive

class Solution{
    public:
        void subsequence(string str)
        {
            unordered_set<string> set;
            for (int i = 0; i < str.length(); i++) {

                for (int j = str.length(); j > i; j--) {
                    string sub_str = str.substr(i, j);
                    st.insert(sub_str);
                    for (int k = 1; k < sub_str.length(); k++) {
                        string sb = sub_str;
                        sb.erase(sb.begin() + k);
                        subsequence(sb);
                    }
                }
            }
        }
};

class Solution{
    public:
        void printSubsequence(string& s) {
        unordered_set<string> set;

            int n = s.length();

            for (int i = 0; i < (1 << n); ++i) {
                string subsequence;
                for (int j = 0; j < n; ++j) {
                    if ((i & (1 << j)) != 0) {
                        subsequence += s[j];
                    }
                }
                set.insert(subsequence);
            }

            for (const auto& sub : set) {
                cout << sub << " ";
            }
        }
}

TC(n*2^n)
SC(n)