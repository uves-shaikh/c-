#include<bits\stdc++.h>

using namespace std;

void reverse(int arr[],int start,int end)
{
    while(start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void solve(int arr[],int n,int k)
{
    reverse(arr,n-k,n);

    reverse(arr,0,n-k);

    reverse(arr,0,n);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    solve(arr,n,2);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}