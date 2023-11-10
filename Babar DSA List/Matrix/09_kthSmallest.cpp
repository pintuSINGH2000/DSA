// Kth element in Matrix
// Given a N x N matrix, where every row and column is sorted in non-decreasing order.
// Find the kth smallest element in the matrix.

// intitution 
// we know that first col element is smallest in their row. So we add all first column in that in priority_queue.
// one by one we remove element add next element from that row till kth time.
// at kth time we get kth smallest element.
class Solution
{   
    public:
    int kthSmallest(int mat[MAX][MAX], int n, int k)
    {
        auto comparator = [&](pair<int, int>& p1, pair<int, int>& p2) {
            return mat[p1.first][p1.second] > mat[p2.first][p2.second]; 
        };
        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(comparator)> pq(comparator);
    
        for(int i=0;i<n;i++){
            pq.push({i,0});
        }
        while(k>1){
            k--;
            auto a=pq.top();
            pq.pop();
            if(a.second+1<n)pq.push({a.first,a.second+1});
        }
        return mat[pq.top().first][pq.top().second];
   }
}

TC(Klogn)
SC(n)