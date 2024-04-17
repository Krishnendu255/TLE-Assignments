/*
    This is a backtracking proble
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

set<string> perm;

void solve(string &s,string &temp, int i, vector<int> &vis){
    if(i==s.size()){
        perm.insert(temp);
        return;
    }
    for(int j = 0; j < s.length(); j++){
        if(!vis[j]){
           temp.push_back(s[j]);
           vis[j]=1;
           solve(s,temp,i+1,vis);
           vis[j]=0;
           temp.pop_back();
        }
    }
}
int main(){   
    string s,temp; cin>>s;
    int n=s.size();

    // this vector is just of size of the input string
    // to mark if its visited
    vector<int> vis(n,0); 
    solve(s,temp,0,vis);

    //just printing the required result
    //perm is global set
    cout<<perm.size()<<endl;
    for(string p : perm)
        cout<<p<<endl;
    return 0;
}