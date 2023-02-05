#include<bits\stdc++.h>

using namespace std;

void rotate(int a[],int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i-1] = a[i];
    }
    temp[n-1] = a[0];
    for(int i=0;i<n;i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {10,12,15,17,44,56};
    int n = 6;

    rotate(arr,n);

    return 0;
}