//J. Factorial
#include <iostream>
using namespace std;

//function calculating factorial
long long fact(long long n){
    if(n==0) return 1;
    if(n==1) return 1;
    return fact(n-1)*n;
}
int main(){
    long long n;
    cin>>n;
    long long x=fact(n);
    cout<<x<<endl;
    return 0;
}