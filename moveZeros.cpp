#include<bits\stdc++.h>

using namespace std;

int solve(int arr[],int n)
{
    int temp[n];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            count++;
        }
        else
        {
            temp[i-count] = arr[i];
        }
    }

    for(int i=0;i<count;i++)
    {
        temp[n-count+i] = 0;
    }

    for(int i=0;i<n;i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int arr[] = {1,0,2,3,0,4,0,1,7,8,0,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    solve(arr,n);

    return 0;
}