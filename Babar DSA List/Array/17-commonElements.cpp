//keep three pointer i,j,k if they are equal move there pointer and also individualy to check duplicate
//else move pointer of smallest element

class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            vector<int> ans;
            int i=0,j=0,k=0;
            while(i<n1&&j<n2&&k<n3){
                if(a[i]==b[j]&&b[j]==c[k]){
                        ans.push_back(a[i]);
                        i++;j++;k++;
                    while(a[i-1]==a[i])i++;
                    while(b[j-1]==b[j])j++;
                    while(c[k-1]==c[k])k++;
                }else if(a[i]<=b[j]&&a[i]<=c[k]) i++;
                else if(b[j]<=a[i]&&b[j]<=c[k]) j++;
                else if(c[k]<a[i]&&c[k]<b[j]) k++;
            }
            return ans;
        }

};

TC(n)
SC(1)
