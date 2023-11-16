// Next Permutation


class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        int i=n-2;
        while(i>=0&&arr[i]>=arr[i+1]) i--;
        
        if(i>=0){
            int j=n-1;
            while(j>=i&&arr[i]>=arr[j])j--;
            swap(arr[i],arr[j]);
        }
        reverse(arr,i+1,n-1);
        return arr;
    }
    
    void reverse(vector<int>& arr,int i,int j){
        while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
};

TC(n)
SC(1)