#include<bits\stdc++.h>

using namespace std;

void solve(int arr[],int n,int k)
{
    int temp[n];
    for(int i=0;i<n-k;i++)
    {
        temp[i] = arr[k+i];
    }

    for(int i=0;i<k;i++)
    {
        temp[n-k+i] = arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    solve(arr,n,3);
    return 0;
}