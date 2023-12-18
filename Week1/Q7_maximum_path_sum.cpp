/* Really good beginner level recursion problem
    
    X. The maximum path-sum
    https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X


    cell either can go down or right
*/

#include<bits/stdc++.h>
using namespace std;
int solve(int i, int j, vector<vector<int>> &v){
    //this is the case for the bound (the area where there is nothing)
    if(i == v.size() || j ==v[0].size())
        return -1e9;
    //base case when we are at the last position(bottomost-right)
    if(i == v.size()-1 && j == v[0].size() - 1){
        return v[i][j];
    }
    int ans = -1e9;
    //calling to move right side
    ans = max(ans, v[i][j] + solve(i, j + 1, v));
    //calling to move downwards
    ans = max(ans, v[i][j] + solve(i + 1, j, v));
    return ans;
}


int main(){
    //just inputs
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n,vector<int> (m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>v[i][j];
        }
        
    }
    cout<<solve(0,0,v)<<endl;
}