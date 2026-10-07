#include<bits/stdc++.h>
using namespace std;

int stringTointeger(char *a,int n){
    // base case.
    if(n==0){
        return 0;
    }
    // recurrence relation.
    int digit = a[n - 1] - '0';
    // int smallAns = stringTointeger(a, n-1);
    // int biggerAns = smallAns * 10 + digit;
    // return biggerAns;
    return stringTointeger(a,n-1)* 10 + digit;
}

int main(){
    char a[]="4329";
    int n = strlen(a);
    int ans = stringTointeger(a,n);
    cout << ans << endl;
    cout << ans + 1 << endl;
    return 0;
}