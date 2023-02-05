#include<bits\stdc++.h>

using namespace std;

int main()
{
    int arr[] = {12,43,67,75,434,66,4};
    int n = 7;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout << arr[i] << " ";
    }
    return 0;
}