/*
//Q. 3n + 1 sequence    

    https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q
    
*/

#include<iostream>
using namespace std;
long long count=1;
void solve(int n){
    
    if(n==1||n==0) return;
    if(n%2==0){
        count++;
        solve(n/2);
    }
    else{
        count++;
          solve(3*n+1);
    }
}
int main(){

    long long t;
    cin>>t;
    solve(t);
    cout<<count<<endl;
    return 0;
}