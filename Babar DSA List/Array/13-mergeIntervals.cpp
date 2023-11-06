//sort intervals by first element if equal than second element
//initialize first element with first interval 
//while iterate compare with column if less we can keep interval in ans else take min ans max of first and second respectively.


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](const vector<int>& i, const vector<int>& j) {
        if (i[0] == j[0]) {
            return i[1] < j[1];
        } else {
            return i[0] < j[0];
        }
    });
    int row=intervals[0][0];
    int col=intervals[0][1];
    vector<vector<int>> ans;
    for(int i=1;i<intervals.size();i++){
        if(col<intervals[i][0]){
           ans.push_back({row,col});
           row=intervals[i][0];
           col=intervals[i][1];
        }else{
            row=min(intervals[i][0],row);
            col=max(intervals[i][1],col);
        }
    }
    ans.push_back({row,col});
    return ans;
    }
};

TC(nlogn)
SC(1)