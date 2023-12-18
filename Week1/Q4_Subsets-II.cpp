/*
//90. Subsets II

    https://leetcode.com/problems/subsets-ii/

*/


#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums,int i,vector<vector<int>>& ans,vector<int> output){
    //making the base case
    if(i>=nums.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(nums,i+1,ans,output);
    //include
    output.push_back(nums[i]);
    solve(nums,i+1,ans,output);
    
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>>ans;
    vector<int> output;
    int i=0;
    //nums should be unique there should be no duplicate elements
    sort(nums.begin(),nums.end());
    solve(nums,i,ans,output);
    //the ans should be unique
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    return ans;
}

int main(){
    vector<int> nums={4,4,4,1,4};
    vector<vector<int>> a=subsets(nums);

    cout<<"[";
    for(int i=0;i<a.size();i++){
        cout<<"[";
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j];
            if(j!=a[i].size()-1){
                cout<<",";
            }
        }
        cout<<"]";
        if(i!=a.size()-1){
            cout<<",";
        }
    }
    cout<<"]";
    return 0;
}