#include<bits\stdc++.h>

using namespace std;

int main()
{
    int arr[] = {10,12,15,17,44,56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int flag = 0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j])
                flag = 0;
            else
                flag =1;
        }
    }

    if(flag == 0)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";
    return 0;
}