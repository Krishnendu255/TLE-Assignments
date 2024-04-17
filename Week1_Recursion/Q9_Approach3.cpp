#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
set<string> perm;
void solve(string &s, int i){
    if(i>=s.length()){
        perm.insert(s);
        return;
    }
    for(int j = i; j < s.length(); j++){
        swap(s[i], s[j]);
        solve(s, i+1);
        swap(s[i], s[j]);
    }
}
int main(){   
    string s;
    cin>>s; 
    solve(s, 0);
    cout<<perm.size()<<endl;
    for(string p : perm)
        cout<<p<<endl;
    return 0;
}