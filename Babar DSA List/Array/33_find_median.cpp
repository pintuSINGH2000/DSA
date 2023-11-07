// Find the median


class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    if(v.size()%2==0){
		        return (v[(v.size()-1)/2]+v[v.size()/2])/2;
		    }else{
		        return v[(v.size())/2];
		    }
		}
};

TC(nlogn)
SC(1)


//find median of two sorted array of same size
int main()

{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(auto &x : arr1)
    cin>>x;
    for(auto &x : arr2)
    cin>>x;

    int pnt1 = 0,pnt2 = 0, count=0;

    while(count != n-1)
    {
        if(arr1[pnt1] > arr2[pnt2])
        pnt2++,count++;
        else if(arr2[pnt2] > arr1[pnt1])
        pnt1++,count++;
        else
        pnt1++,pnt2++,count+=2;

    }
    cout<<(arr1[pnt1] + arr2[pnt2])/2<<endl;

}

TC(n)
SC(1)