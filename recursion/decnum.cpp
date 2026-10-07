#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

void printDec(int n){
    //base case. 
    if(n==0){
        return;
    }
    // recurrence relation.
    cout << n << " ";
    printDec(n-1);
    
}

int main(){
    int n;
    cin >> n;
    printDec(n);
    return 0;
}