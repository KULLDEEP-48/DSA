#include<bits/stdc++.h>
using namespace std;
int waystoNstairs(int n){
    // base case
    if(n<0)
    return 0;

    if(n==0)
    return 1; 
    // recurrence relation
    return waystoNstairs(n-1) + waystoNstairs(n-2) + waystoNstairs(n-3);
    
}

int Nstairs(int n,int k){
    // base case
    if(n<0)
    return 0;

    if(n==0)
    return 1; 
    // recurrence relation
    int ans = 0;
    for(int i=1;i<=k;i++){
        ans += Nstairs(n-i,k);
    }
    return ans;
}
int main(){
    int n,k;
    cin >> n >> k;
    cout << waystoNstairs(n) << endl;
    cout << Nstairs(n,k) << endl;
    return 0;
}