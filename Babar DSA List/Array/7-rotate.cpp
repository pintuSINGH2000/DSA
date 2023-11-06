// Cyclically rotate an array by one

void rotate(int arr[], int n)
{
    int a=arr[0];
    for(int j=1;j<n;j++){
        int b=arr[j];
        arr[j]=a;
        a=b;
    }
    arr[0]=a;
}

TC(N)
SC(1)
