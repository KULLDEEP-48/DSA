#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

// void printInc(int n){
//     //base case. 
//     if(n==0){
//         return;
//     }
//     // recurrence relation.
//     printInc(n-1);  
//     //for n=3 --> f(3) call f(2) which call f(1) which call f(0) then return and cout 1 from f(1),2 from f(2) and so on.
//     cout << n << " ";
   
// }

void printInc(int i,int n){
    // base case.
    if(i==n+1){
        return;
    }
    cout << i << " ";
    printInc(i+1,n);
}

int main(){
    int i=1;
    int n;
    cin >> n;
    // printInc(n);
    printInc(i,n);
    return n;
}