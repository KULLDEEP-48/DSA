#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int fibo(int n){
    // base case.
    if(n==0 or n==1){
        return n;
    }
    // reurrence relation.
    // fibo(n) = fibo(n-1) + fibo(n-2).
    int smallerans1 = fibo(n-1);
    int smallerans2 = fibo(n-2);

    // find the solution.
    // int greaterans = smallerans1 + smallerans2;
    // return greaterans;
    return smallerans1 + smallerans2;
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}