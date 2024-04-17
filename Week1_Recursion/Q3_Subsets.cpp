/*
//78. Subsets

    https://leetcode.com/problems/subsets/description/

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
    solve(nums,i,ans,output);
    return ans;
}

int main(){
    vector<int> nums={1,2,3};
    vector<vector<int>> a=subsets(nums);
    //loop through this and print the elements and format should be like [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
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
    return 0;
}