#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a , int b){
    return a <=b;
}

int main(){
    int coins[] ={1,2,5,10,20,50,100};
    int n = sizeof(coins)/sizeof(int);
    int key_money;
    cin >> key_money;

    while(key_money>0){
        int index = lower_bound(coins,coins + n, key_money,compare) - coins -1;  // >= (change) --> (<=)
        cout << "we would exchange of coins " << coins[index] << endl;

        //for 25 (25 - 20).
    key_money -= coins[index];
    }
    
    return 0;
}