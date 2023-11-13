

class Solution
{
	public:
		vector<string> find_permutation(string s)
		{
		    int n=s.length();
		    sort(s.begin(),s.end());
		    vector<string> ans;
		    vector<int> temp;
		    permutation(s,"",temp,ans);
		    return ans;
		}
		void permutation(string input,string output,vector<int>& temp,vector<string>& ans){
		    
		    if(output.length()==input.length()){
		        if(find(ans.begin(),ans.end(),output)==ans.end()){
		            ans.push_back(output);
		        }
		        return;
		    }
		    for(int i=0;i<input.length();i++){
		        if(find(temp.begin(),temp.end(),i)==temp.end()){
		            temp.push_back(i);
		            permutation(input,output+input[i],temp,ans);
		            temp.pop_back();
		        }
		    }
		}
};
TC(n!)
SC(1)