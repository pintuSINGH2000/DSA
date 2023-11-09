// Max rectangle
//calculate and compare area of rectangle in every row.

class Solution{
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        int maxRectangle=0;
        for(int i=0;i<n;i++){
            if(i!=0){
                for(int j=0;j<m;j++){
                    if(M[i][j]!=0){//if base is not there so height will be 0.
                     M[i][j]+=M[i-1][j];
                    }
                }
            }
            maxRectangle=max(maxRectangle,area(M[i],m));
        }
        return maxRectangle;
    }

    //calculate maxarea in array. 
    int area(int arr[],int n){
        stack<int> st;
        int maxRectangle=0;
        for(int i=0;i<=n;i++){
            int currHeight=i==n?0:arr[i];
            while(!st.empty()&&arr[st.top()]>currHeight){
                int top=st.top();
                st.pop();
                int width=st.empty()?i:i-st.top()-1; // calculate width between current to smaller height than current
                int rectangle=arr[top]*width;
                maxRectangle=max(rectangle,maxRectangle);
            }
            st.push(i);
        }
        return maxRectangle;
    }
};

TC(N*N)
SC(N)//stack