//Dutch National Flag algorithm, which was designed by Edsger W. Dijkstra.
//keep pointer low at first for 0 and high at last for 2 and current for moving from left to right
//if current is 0 than swap with low if current 2 than swap with high else if one then move current pointer


class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int low=0,current=0,high=n-1;
        while(current<=high){
            if(a[current]==0){
                swap(a[current],a[low]);
                low++;
                current++;
            }else if(a[current]==2){
                swap(a[current],a[high]);
                high--;
            }else current++;
        }
    }
    
};
TC(logn);
SC(1);