#include<bits\stdc++.h>

using namespace std;

int main()
{
    int arr[] = {10,5,10,15,5,10};

    unordered_map<int,int> mpp;

    for(int i=0;i<6;i++){
        mpp[arr[i]]++;
    }

    for (auto x : mpp)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}