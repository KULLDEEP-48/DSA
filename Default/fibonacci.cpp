#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

void Fibonacci(int n){
    int prev = 0;
    int next = 1;    
    int ans =0;

    // to return the value at specific position.
// if(n==1){
//     return 0;
//    }
//    else if(n==2){
//     return 1;
//    }

// else{} ->>
    cout << "0" << " " << "1" << " " ;
        for( int i=1;i<=n-2;i++){
        ans = prev + next;
        prev = next;
        next = ans;
        
        cout << ans << " ";
    }
}

int main(){
    int n;
    cin >> n;
    Fibonacci(n);
    cout << endl;
    return 0;
}