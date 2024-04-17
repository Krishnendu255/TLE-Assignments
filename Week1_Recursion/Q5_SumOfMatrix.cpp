/*
    //N. Sum of a Matrix

    https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N

*/

#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&a1,vector<vector<int>>&a2,vector<vector<int>>&a3,int i,int j,int c,int r){
    if(i==r&&j==0)
        return;
    a3[i][j]=a1[i][j]+a2[i][j]; 
    if(j<c-1){
        solve(a1,a2,a3,i,j+1,c,r);
    }
    else{
        solve(a1,a2,a3,i+1,0,c,r);
    }
}

int main(){
    int c;
    int r;    
    cin>>r>>c;
    vector<vector<int>>a1(r,vector<int>(c));
    vector<vector<int>>a2(r,vector<int>(c));
    vector<vector<int>>a3(r,vector<int>(c));
    //taking input matices
    for(int i=0; i<r; i++)
        for(int j=0 ; j<c; j++){
            cin>>a1[i][j];
        }
    for(int i=0; i<r; i++)
        for(int j=0 ; j<c; j++){
            cin>>a2[i][j];
        }
    solve(a1,a2,a3,0,0,c,r);
    //input ends here 
    // //iterative process for sum of matrices
    // for(int i=0; i<r; i++)
    //     for(int j=0 ; j<c; j++){
    //         arr3[i][j]=arr2[i][j]+arr1[i][j];
    //     }
    // //printing the result sum matrix
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}