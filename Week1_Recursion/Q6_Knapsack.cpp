/*
    //U. Knapsack

    https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
    
*/

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&wt,vector<int>&val,int i,int left_W){
    //v and w are just for indexing for both the lists
    //base case
    if(left_W==0||i==wt.size())
        return 0;
    //not take the wt of respective index(exclude)    
    int ans=solve(wt,val,i+1,left_W);//ans=not_take
    //including the respective wt and values
    if(left_W>=wt[i]){
        //left_W-=wt[i];
        //int take=val[i]+solve(wt,val,i+1,left_W);
        int take=val[i]+solve(wt,val,i+1,left_W-=wt[i]);
        ans=max(ans,take);
    }
    return ans;
}
int main(){
    int N,W;
    cin>>N>>W;
    //declare vectors of size N
    vector<int>wt(N);
    vector<int>val(N);
    for (int i = 0; i < N; i++){
        cin>>wt[i]>>val[i];
    }
    cout<<solve(wt,val,0,W)<<endl;
    return 0;
}