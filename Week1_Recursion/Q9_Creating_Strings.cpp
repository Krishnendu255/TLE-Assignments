#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> ans;
    do{
        ans.push_back(s);
    } while (next_permutation(s.begin(),s.end()));
    cout<<ans.size()<<"\n";
    for(string a:ans)
        cout<< a <<"\n";
    
}
int main(){
    solve();
}