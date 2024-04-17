#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
vector<string> perm;
string s;
vector<int>char_count(26,0);
void solve(string curr = ""){
    if(curr.size() == s.size()){
        perm.pb(curr);
        return;
    }
    for(int i = 0; i < 26 ; i++){
        if(char_count[i] > 0){
            char_count[i]--;
            solve(curr + char('a' + i));
            char_count[i]++;
        }
    }
    
}
int main(){
    cin>>s;

    for(char c : s)
        char_count[c-'a']++;

    solve();
    cout<<perm.size()<<endl;
    for(string p : perm)
        cout<<p<<endl;
    
    return 0;
}