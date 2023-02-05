#include<bits\stdc++.h>

using namespace std;

vector<int> topK(vector<int>& nums,int k){
    priority_queue<pair<int,int>> pq;

    unordered_map<int,int> map;

    for(int i=0;i<nums.size();i++){
        map[nums[i]]++;
    }

    for(auto i : map){
        pq.push({i.second,i.first});
    }

    vector<int> ans;

    for(int i = 0;i<k;i++){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
} 


int main()
{
    int nums[] = {1,1,1,2,2,3};
    int k = 2;

    cout << topK(nums,k);

    return 0;
}