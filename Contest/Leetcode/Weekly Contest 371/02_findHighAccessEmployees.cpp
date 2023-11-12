// High-Access Employees
// You are given a 2D 0-indexed array of strings, access_times, with size n.
// For each i where 0 <= i <= n - 1, access_times[i][0] represents the name of an employee, and access_times[i][1] represents the access time of that employee.
// All entries in access_times are within the same day.

// The access time is represented as four digits using a 24-hour time format, for example, "0800" or "2250".

// An employee is said to be high-access if he has accessed the system three or more times within a one-hour period.

// Times with exactly one hour of difference are not considered part of the same one-hour period. For example, "0815" and "0915" are not part of the same one-hour period.

// Access times at the start and end of the day are not counted within the same one-hour period. For example, "0005" and "2350" are not part of the same one-hour period.

// Return a list that contains the names of high-access employees with any order you want.

// 1 <= access_times.length <= 100
// access_times[i].length == 2
// 1 <= access_times[i][0].length <= 10
// access_times[i][0] consists only of English small letters.
// access_times[i][1].length == 4
// access_times[i][1] is in 24-hour time format.
// access_times[i][1] consists only of '0' to '9'.

// stored element in map and their all time.sort all time and compare time diff between three element.

class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        unordered_map<string,vector<int>> access;
        for(int i=0;i<access_times.size();i++){
            access[access_times[i][0]].push_back(stoi(access_times[i][1]));
        }
        vector<string> ans;
        for(auto aa:access){
            sort(aa.second.begin(),aa.second.end());
            for(int j=2;j<aa.second.size();j++){
                if(aa.second[j]-aa.second[j-2]<100){
                    ans.push_back(aa.first);
                    break;
                }
            }
        }
        return ans;
    }
};
TC(nlogn)
SC(n)

//sort by element, check if element more than 3 or more their timediff in between on hr. 

class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        set<string> temp;
        sort(access_times.begin(),access_times.end());
        int n=access_times.size();
        for(int i=2;i<n;i++){
            if(access_times[i][0]==access_times[i-2][0]){
            if(abs(stoi(access_times[i][1])-stoi(access_times[i-2][1]))<100){
                temp.insert(access_times[i][0]);
            }
            }
        }
        vector<string> ans;
        for(auto aa:temp){
            ans.push_back(aa);
        }
        return ans;
    }
};

TC(nlogn)
SC(n);