#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    
    int key;
    cin >> key;
    int *ans = find(a,a+n,key);   // [strting add , ending add).
    int index = ans - a;  // subtracting the address gives us the index of the ans bucket.

    if(index==n){
        cout << "key not found" << endl;
    }
    else{
        cout << "key found at " << index << endl;
    }
    return 0;
}