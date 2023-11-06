class Solution
{
   public:
    int findSum(int a[], int N)
    {
        int* minElement = std::min_element(a, a + N);
        int* maxElement = std::max_element(a, a + N);
       
    	return *minElement+*maxElement;
    }

};

TC(N);
SC(1);