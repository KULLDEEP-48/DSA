#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int fact(int n){
    // 1. base case.
    if(n==0){
        return 1;
    }
    // 2. recurrence relation
    // fact(n) = n*fact(n-1).
    // int smallerAns = fact(n-1);
    // int biggerAns = n * smallerAns;
    // return biggerAns;

    return n * fact(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << n << "! is " <<  fact(n) << endl;
    return 0;
}