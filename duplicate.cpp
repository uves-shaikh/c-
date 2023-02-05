#include<bits\stdc++.h>

using namespace std;

int main()
{
    int arr[] = {10,12,15,15,10,17,44,44,56};
    int n = sizeof(arr) / sizeof(arr[0]);

    set<int> st;

    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    }

    int k = st.size();
    int j = 0;
    for(int x : st){
        arr[j++] = x;
    }

    for(int i=0;i<k;i++)
    {
        cout << arr[i] << " ";
    }

    // for(int i = 0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             arr[j-1] = arr[j];
    //         }
    //     }
    //     cout << arr[i] << " ";
    // }
    
    return 0;
}