#include<bits\stdc++.h>

using namespace std;

int main()
{
    int arr[] = {12,43,67,75,434,66,4};
    int n = 7;

    for(int i=0;i<n;i++)
    {
        int min_idx = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        cout << arr[i] << " ";
    }


    return 0;
}