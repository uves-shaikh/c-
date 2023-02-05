#include<bits\stdc++.h>

using namespace std;

int main()
{
    int small=INT_MAX,sec_small=INT_MAX;
    int large=INT_MIN,sec_large=INT_MIN;

    int arr[] = {10,3,89,7,44,34};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n;i++){
        small = min(small,arr[i]);
        large = max(large,arr[i]);
    }

    for(int i = 0;i<n;i++){
        if(arr[i]<sec_small && arr[i]!=small)
            sec_small = arr[i];
        if(arr[i]>sec_large && arr[i]!=large)
            sec_large = arr[i];    
    }

    cout << sec_large << " " << sec_small;

    return 0;
}