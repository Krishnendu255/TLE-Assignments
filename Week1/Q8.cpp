#include<bits/stdc++.h>
using namespace std;
bool solve(int i, int cal,int x, vector<int> &v){
    if(i == v.size()){
        return x==cal;
    }

    return solve(i+1, cal + v[i], x, v) || solve(i+1, cal - v[i], x, v);
}   
int main(){
    int n,x;cin>>n>>x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int cal=v[0];
    if(solve(1,cal,x,v)){
        cout<<"YES"<<endl;
    }
    else 
        cout<<"NO"<<endl;
}