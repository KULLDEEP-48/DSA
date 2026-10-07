#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int power(int a,int n){
    // base case.
    if(n==0){
        return 1;
    }
    // recurrence relation.
    // a^n = a* a^(n-1).
    int smallerAns = power(a,n-1);
    int biggerAns = a*smallerAns;
    return biggerAns;
}
int main(){
    int a,n;
    cin >> a >> n;
    cout << power(a,n);
    return 0;
}